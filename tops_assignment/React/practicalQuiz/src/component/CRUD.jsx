import React, { useEffect, useState } from 'react'
import "./CRUD.css"
import axios from 'axios'


function CRUD() {

    const baseApi = `https://67bc3a59ed4861e07b39b24a.mockapi.io/userData`

    const [allData, setAllData] = useState([])

    const [id, setId] = useState("")
    const [firstName, setFirstName] = useState("")
    const [lastName, setLastName] = useState("")
    const [formEmail, setFormEmail] = useState("")
    const [formNumber, setFormNumber] = useState("")
    const [formCity, setFormCity] = useState("")
    const [formState, setFormState] = useState("")

    const [dataEdit, setDataEdit] = useState(false)

    // Fetch data
    const fetchData = async () => {
        try {
            const response = await axios.get(baseApi)
            setAllData(response.data)
        } catch (error) {
            console.log(error)
        }
    }

    // Insert Data
    const insertData = async () => {
        const newData = {
            first_Name: firstName,
            last_Name: lastName,
            email: formEmail,
            mobile_Number: formNumber,
            city: formCity,
            state: formState,
        }

        try {
            await axios.post(baseApi, newData)
            fetchData()
            formClear()
            alert("Data Insert Successfully...!!")
        } catch (error) {
            console.log(error)
        }
    }

    // Select Edit
    const selectEdit = (i) => {
        setDataEdit(true)
        setId(i.id)
        setFirstName(i.first_Name)
        setLastName(i.last_Name)
        setFormEmail(i.email)
        setFormNumber(i.mobile_Number)
        setFormCity(i.city)
        setFormState(i.state)
    }

    // Edit Data
    const editData = async () => {
        const updatedData = {
            first_Name: firstName,
            last_Name: lastName,
            email: formEmail,
            mobile_Number: formNumber,
            city: formCity,
            state: formState,
        }

        try {
            await axios.put(`${baseApi}/${id}`, updatedData)
            fetchData();
            formClear();
            setDataEdit(false);
            alert("Data Updated Successfullyy...!!")
        } catch (error) {
            console.log(error)
        }
    }

    // Delete Data
    const dataDelete = async (id) => {
        if (!confirm("Are You Sure You Want to Delete this Record...??")) {
            return false;
        }
        try {
            await axios.delete(`${baseApi}/${id}`)
            fetchData()
        } catch (error) {
            console.log(error)
        }
    }
    // Form Clear
    const formClear = () => {
        setDataEdit(false)
        setId("")
        setFirstName("")
        setLastName("")
        setFormEmail("")
        setFormNumber("")
        setFormCity("")
        setFormState("")
    }

    useEffect(() => {
        fetchData()
    }, [])

    return (
        <>
            {/* Form Start */}
            <div className='mt-15 flex justify-center items-center'>
                <div className="w-full max-w-fit">
                    <form className="bg-white shadow-md rounded px-8 pt-6 pb-8 mb-4">
                        <div className="flex justify-center items-center gap-10">
                            <div className="mb-4">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="firstName">
                                    First Name
                                </label>
                                <input type="text" id="firstName" value={firstName} onChange={(e) => setFirstName(e.target.value)} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="First Name" />
                            </div>

                            <div className="mb-4">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="lastName">
                                    Last Name
                                </label>
                                <input type="text" id="lastName" value={lastName} onChange={(e) => setLastName(e.target.value)} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="Last Name" />
                            </div>

                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="email">
                                    Email
                                </label>
                                <input type="email" id="email" value={formEmail} onChange={(e) => setFormEmail(e.target.value)} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="EnterYourmail@gmail.com" />
                            </div>
                        </div>

                        <div className="flex justify-center items-center gap-10">
                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="number">
                                    Number
                                </label>
                                <input type="tel" id="number" value={formNumber} onChange={(e) => setFormNumber(e.target.value)} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="9898989898" />
                            </div>

                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="city">
                                    City
                                </label>
                                <input type="text" id="city" value={formCity} onChange={(e) => setFormCity(e.target.value)} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="Ahmedabad" />
                            </div>

                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="state">
                                    State
                                </label>
                                <input type="text" id="state" value={formState} onChange={(e) => setFormState(e.target.value)} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="Gujarat" />
                            </div>
                        </div>

                        <div className="flex items-center justify-between">
                            <button type="button" className="bg-blue-500 hover:bg-blue-700 text-white font-bold py-2 px-4 rounded focus:outline-none focus:shadow-outline hover:cursor-pointer" onClick={dataEdit ? editData : insertData}>
                                {dataEdit ? "Updated" : "Add"}
                            </button>
                            <button type='reset' className="bg-gray-500 hover:bg-gray-700 text-white font-bold py-2 px-4 rounded focus:outline-none focus:shadow-outline hover:cursor-pointer" onClick={formClear}>
                                Clear
                            </button>
                        </div>
                    </form>
                </div>
            </div>
            {/* Form End */}

            {/* CRUD Table - Start */}
            <div className='mt-15 flex justify-center items-center border border-sky-700 text-center'>
                <table className='w-full text-sm text-left rtl:text-right text-gray-500 dark:text-gray-400'>
                    <thead className='text-xs text-gray-700 uppercase bg-gray-50 dark:bg-gray-700 dark:text-gray-400'>
                        <tr>
                            <th scope="col" className="px-6 py-3">Id</th>
                            <th scope="col" className="px-6 py-3">First Name</th>
                            <th scope="col" className="px-6 py-3">Last Name</th>
                            <th scope="col" className="px-6 py-3">Email</th>
                            <th scope="col" className="px-6 py-3">Number</th>
                            <th scope="col" className="px-6 py-3">City</th>
                            <th scope="col" className="px-6 py-3">State</th>
                            <th scope="col" className="px-6 py-3">Action</th>
                        </tr>
                    </thead>
                    <tbody>
                        {
                            allData.map((i, index) => {
                                return (
                                    <tr className='bg-white border-b dark:bg-gray-800 dark:border-gray-700 border-gray-200' key={index}>
                                        <th scope="row" className="px-6 py-4 font-medium text-gray-900 whitespace-nowrap dark:text-white">
                                            {i.id}
                                        </th>
                                        <td className="px-6 py-4">{i.first_Name}</td>
                                        <td className="px-6 py-4">{i.last_Name}</td>
                                        <td className="px-6 py-4">{i.email}</td>
                                        <td className="px-6 py-4">{i.mobile_Number}</td>
                                        <td className="px-6 py-4">{i.city}</td>
                                        <td className="px-6 py-4">{i.state}</td>
                                        <td className="px-6 py-4">
                                            <button type="button" className="focus:outline-none text-white bg-purple-700 hover:bg-purple-800 focus:ring-4 focus:ring-purple-300 font-medium rounded-lg text-sm px-5 py-2.5 mb-2 dark:bg-purple-600 dark:hover:bg-purple-700 dark:focus:ring-purple-900 hover:cursor-pointer" onClick={() => selectEdit(i)}>Edit</button> {" "}

                                            <button type="button" className="focus:outline-none text-white bg-red-700 hover:bg-red-800 focus:ring-4 focus:ring-red-300 font-medium rounded-lg text-sm px-5 py-2.5 me-2 mb-2 dark:bg-red-600 dark:hover:bg-red-700 dark:focus:ring-red-900 hover:cursor-pointer" onClick={() => dataDelete(i.id)}>Delete</button>
                                        </td>
                                    </tr>
                                )
                            })
                        }

                        {/* {
                            allData.map((i) => {
                                return (
                                    <tr className="bg-white border-b dark:bg-gray-800 dark:border-gray-700 border-gray-200" key={i.id}>
                                        <th scope="row" className="px-6 py-4 font-medium text-gray-900 whitespace-nowrap dark:text-white">
                                            {i.id}
                                        </th>
                                        <td className="px-6 py-4">{i.first_Name}</td>
                                        <td className="px-6 py-4">{i.last_Name}</td>
                                        <td className="px-6 py-4">{i.email}</td>
                                        <td className="px-6 py-4">{i.mobile_Number}</td>
                                        <td className="px-6 py-4">{i.city}</td>
                                        <td className="px-6 py-4">{i.state}</td>
                                        <td className="px-6 py-4">
                                            <button type="button" className="focus:outline-none text-white bg-purple-700 hover:bg-purple-800 focus:ring-4 focus:ring-purple-300 font-medium rounded-lg text-sm px-5 py-2.5 mb-2 dark:bg-purple-600 dark:hover:bg-purple-700 dark:focus:ring-purple-900 hover:cursor-pointer" onClick={() => selectEdit(i)}>Edit</button> {" "}

                                            <button type="button" className="focus:outline-none text-white bg-red-700 hover:bg-red-800 focus:ring-4 focus:ring-red-300 font-medium rounded-lg text-sm px-5 py-2.5 me-2 mb-2 dark:bg-red-600 dark:hover:bg-red-700 dark:focus:ring-red-900 hover:cursor-pointer" onClick={() => deleteData(i.id)}>Delete</button>
                                        </td>
                                    </tr>
                                )
                            })
                        } */}
                    </tbody>
                </table>
            </div>
            {/* CRUD Table - End */}
        </>
    )
}

export default CRUD