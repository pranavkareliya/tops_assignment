import React, { useEffect, useState } from 'react';
import axios from 'axios';
import Table from 'react-bootstrap/Table';

// db.json file is for this project :-

function JsonServer() {
    const [formData, setFormData] = useState({
        firstName: '',
        lastName: '',
        email: ''
    });
    const [id, setId] = useState('');
    const [userdata, setUserdata] = useState([]);

    const handleChange = (e) => {
        const { name, value } = e.target;
        setFormData({
            ...formData,
            [name]: value,
        });
    };

    const dispData = () => {
        axios.get('http://localhost:4000/user')
            .then((res) => setUserdata(res.data))
            .catch((err) => console.log(err));
    };

    useEffect(() => {
        dispData();
    }, []);

    const handleSubmit = (e) => {
        e.preventDefault();
        if (id) {
            // Update data if id is present
            axios.put(`http://localhost:4000/user/${id}`, formData)
                .then((res) => {
                    console.log('Data updated:', res);
                    dispData();  // Refresh data
                    setFormData({ firstName: '', lastName: '', email: '' });  // Reset form
                    setId('');  // Reset id after update
                })
                .catch((err) => console.log(err));
        } else {
            // Create new user
            axios.post('http://localhost:4000/user', formData)
                .then((res) => {
                    console.log('Data added:', res);
                    dispData();  // Refresh data
                    setFormData({ firstName: '', lastName: '', email: '' });  // Reset form
                })
                .catch((err) => console.log(err));
        }
    };

    const editdata = (id) => {
        setId(id);
        axios.get(`http://localhost:4000/user/${id}`)
            .then((res) => setFormData(res.data))
            .catch((err) => console.log(err));
    };

    const deldata = (id) => {
        axios.delete(`http://localhost:4000/user/${id}`)
            .then((res) => {
                console.log('Data deleted:', res);
                dispData();  // Refresh data
            })
            .catch((err) => console.log(err));
    };

    return (
        <>
            <div style={{ display: "flex" }}>
                <div className="form-container">
                    <form onSubmit={handleSubmit}>
                        <div className="form-group">
                            <label htmlFor="firstName">First Name</label>
                            <input
                                type="text"
                                id="firstName"
                                name="firstName"
                                onChange={handleChange}
                                required
                                value={formData.firstName}
                            />
                        </div>
                        <div className="form-group">
                            <label htmlFor="lastName">Last Name</label>
                            <input
                                type="text"
                                id="lastName"
                                name="lastName"
                                value={formData.lastName}
                                onChange={handleChange}
                                required
                            />
                        </div>
                        <div className="form-group">
                            <label htmlFor="email">Email</label>
                            <input
                                type="email"
                                id="email"
                                name="email"
                                value={formData.email}
                                onChange={handleChange}
                                required
                            />
                        </div>
                        <button type="submit">Submit</button>
                    </form>
                </div>

                <div className="tablediv">
                    <Table striped bordered hover>
                        <thead>
                            <tr>
                                <th>First Name</th>
                                <th>Last Name</th>
                                <th>Email</th>
                                <th>Action</th>
                            </tr>
                        </thead>
                        <tbody>
                            {userdata.map((i) => {
                                return (
                                    <tr key={i.id}>
                                        <td>{i.firstName}</td>
                                        <td>{i.lastName}</td>
                                        <td>{i.email}</td>
                                        <td>
                                            <button onClick={() => editdata(i.id)}>Edit</button>
                                            <button onClick={() => deldata(i.id)}>Delete</button>
                                        </td>
                                    </tr>
                                )
                            })}
                        </tbody>
                    </Table>
                </div>
            </div>
        </>
    );
}

export default JsonServer;
