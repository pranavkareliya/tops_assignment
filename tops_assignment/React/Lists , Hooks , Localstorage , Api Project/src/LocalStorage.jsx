import React, { useState, useEffect } from "react";
import 'bootstrap/dist/css/bootstrap.min.css';
import Button from 'react-bootstrap/Button';
import Table from 'react-bootstrap/Table';

function LocalStorage() {

    const [inputValue, setInputValue] = useState("");
    const [items, setItems] = useState([]);
    const [editingIndex, setEditingIndex] = useState(null);

    useEffect(() => {
        const storedItems = JSON.parse(localStorage.getItem("items")) || [];
        setItems(storedItems);
    }, []);

    useEffect(() => {
        if (items.length > 0) {
            localStorage.setItem("items", JSON.stringify(items));
        }
    }, [items]);

    const createItem = () => {
        if (inputValue.trim() === "") {
            alert("Please enter an item!");
            return;
        }
        setItems([...items, inputValue.trim()]);
        setInputValue("");
    }

    const editItem = (index, currentItem) => {
        setInputValue(currentItem);
        setEditingIndex(index);
    }

    const updateItem = () => {
        if (inputValue.trim() === "") {
            alert("Please enter a valid item!");
            return;
        }
        const updatedItems = [...items];
        updatedItems[editingIndex] = inputValue.trim();
        setItems(updatedItems);
        setInputValue("");
        setEditingIndex(null);
    }

    const deleteItem = (index) => {
        const updatedItems = items.filter((_, i) => i !== index);
        setItems(updatedItems);
    }

    return (
        <>
            <div>
                <h3>
                    <u>Local Storage CRUD</u>
                </h3>
            </div>
            <div>
                <label htmlFor='itemdetail' className='mt-4'>
                    <h5>Enter Item Detail : </h5>
                </label>
                <div className='form-group' style={{ display: 'flex', justifyContent: "center", alignItems: "center", gap: "8px" }}>
                    <input type="text" value={inputValue} className='form-control w-25' name="itemdetail" id="itemdetail" placeholder='Enter Item' onChange={(e) => setInputValue(e.target.value)} />
                    <Button variant="primary" onClick={editingIndex !== null ? updateItem : createItem}>Add Item</Button>
                </div>
            </div>

            <div className='mt-5'>
                <Table striped bordered hover>
                    <thead>
                        <tr>
                            <th>No</th>
                            <th>Item Detail</th>
                            <th>Action</th>
                        </tr>
                    </thead>

                    <tbody>
                        {
                            // (items !== "" ) ?

                            items.map((i, index) => (
                                <tr key={index}>
                                    <th>{index + 1}</th>
                                    <td>{i}</td>
                                    <td>
                                        <Button variant='dark' onClick={() => editItem(index, i)}>Edit</Button> {" "}
                                        <Button variant='danger' onClick={() => deleteItem(index)}>Delete</Button>
                                    </td>
                                </tr>
                            ))

                            // :

                            // <tr>
                            //     <th colSpan={3}>No Data Found...</th>
                            // </tr>
                        }
                    </tbody>
                </Table>
            </div>
        </>
    )
}

export default LocalStorage