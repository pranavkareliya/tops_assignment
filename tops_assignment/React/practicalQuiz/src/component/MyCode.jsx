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
    // const [dataDelete, setDataDelet] = useState(false)

    // Fetch AllData
    const fetchData = async () => {
        try {
            const response = await axios.get(baseApi)
            setAllData(() => response.data)
            // console.log(response.data)
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
            number: formNumber,
            city: formCity,
            state: formState,
        }

        try {
            await axios.post(baseApi, newData)
            formClear()
        } catch (error) {
            console.log(error)
        }

    }

    // Edit Data
    const editData = async (id) => {

        const updateData = {

        }

        try {
            const editRes = await axios.put(`${baseApi}/${id}`)
        } catch (error) {
            console.log(error)
        }
    }

    // Delete Data
    const deleteData = async (id) => {
        if (!window.confirm("Are You Sure You want to delete this Data..??")) {
            return;
        }
        console.log("Delete ID is : ", id)
        try {
            const response = await axios.delete(`${baseApi}/${id}`);

            // Check if the response status is 200 (OK)
            if (response.status === 200) {
                console.log("Data deleted successfully.");
                // Refresh the data after successful deletion
                fetchData();
            } else {
                console.error("Failed to delete the data. Status:", response.status);
            }
        } catch (error) {
            console.log(error)
        }
    }

    // Form Clear
    const formClear = () => {
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
                        <div className='flex justify-center items-center gap-10'>
                            <div className="mb-4">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="firstName">
                                    First Name
                                </label>
                                <input className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" id="firstName" type="text" placeholder="First Name" />
                            </div>

                            <div className="mb-4">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="lastName">
                                    Last Name
                                </label>
                                <input className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" id="lastName" type="text" placeholder="Last Name" />
                            </div>

                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="email">
                                    Email
                                </label>
                                <input className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" id="email" type="email" placeholder="EnterYourmail@gmail.com" />
                            </div>
                        </div>

                        <div className='flex justify-center items-center gap-10'>
                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="number">
                                    Number
                                </label>
                                <input className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" id="number" type="tel" placeholder="9898989898" />
                            </div>

                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="city">
                                    City
                                </label>
                                <input className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" id="city" type="text" placeholder="Ahmedabad" />
                            </div>

                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="state">
                                    State
                                </label>
                                <input className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" id="state" type="text" placeholder="Gujarat" />
                            </div>
                        </div>

                        <div className="flex items-center justify-between">
                            <button className="bg-blue-500 hover:bg-blue-700 text-white font-bold py-2 px-4 rounded focus:outline-none focus:shadow-outline hover:cursor-pointer" type="button">
                                Sign In
                            </button>
                            <button className="bg-gray-500 hover:bg-gray-700 text-white font-bold py-2 px-4 rounded focus:outline-none focus:shadow-outline hover:cursor-pointer" type='reset' onClick={() => formClear()}>
                                Clear
                            </button>
                        </div>
                    </form>
                </div>
            </div>
            {/* Form End */}

            {/* CRUD Table - Start */}
            <div className='mt-15 flex justify-center items-center border border-sky-700'>
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
                            allData.map((i) => {
                                return (
                                    <tr className='bg-white border-b dark:bg-gray-800 dark:border-gray-700 border-gray-200' key={i.id}>
                                        <th scope="row" className="px-6 py-4 font-medium text-gray-900 whitespace-nowrap dark:text-white">{i.id}</th>
                                        <td className='px-6 py-4'>{i.first_Name}</td>
                                        <td className='px-6 py-4'>{i.last_Name}</td>
                                        <td className='px-6 py-4'>{i.email}</td>
                                        <td className='px-6 py-4'>{i.mobile_Number}</td>
                                        <td className='px-6 py-4'>{i.city}</td>
                                        <td className='px-6 py-4'>{i.state}</td>
                                        <td className='px-6 py-4'>
                                            <button type="button" className="focus:outline-none text-white bg-purple-700 hover:bg-purple-800 focus:ring-4 focus:ring-purple-300 font-medium rounded-lg text-sm px-5 py-2.5 mb-2 dark:bg-purple-600 dark:hover:bg-purple-700 dark:focus:ring-purple-900 hover:cursor-pointer">Edit</button> {" "}
                                            <button type="button"
                                                className="focus:outline-none text-white bg-red-700 hover:bg-red-800 focus:ring-4 focus:ring-red-300 font-medium rounded-lg text-sm px-5 py-2.5 me-2 mb-2 dark:bg-red-600 dark:hover:bg-red-700 dark:focus:ring-red-900 hover:cursor-pointer"
                                                onClick={() => deleteData(i.id)} >
                                                Delete
                                            </button>
                                        </td>
                                    </tr>
                                )
                            })
                        }
                    </tbody>
                    {/* <tbody>
                        <tr className='bg-white border-b dark:bg-gray-800 dark:border-gray-700 border-gray-200'>
                            <th scope="row" className="px-6 py-4 font-medium text-gray-900 whitespace-nowrap dark:text-white">1.</th>
                            <td className='px-6 py-4'>Pranav</td>
                            <td className='px-6 py-4'>Kareliya</td>
                            <td className='px-6 py-4'>pranavkareliya@gmail.com</td>
                            <td className='px-6 py-4'>9898989898</td>
                            <td className='px-6 py-4'>Ahmedabad</td>
                            <td className='px-6 py-4'>Gujarat</td>
                            <td className='px-6 py-4'>
                                <button type="button" className="focus:outline-none text-white bg-purple-700 hover:bg-purple-800 focus:ring-4 focus:ring-purple-300 font-medium rounded-lg text-sm px-5 py-2.5 mb-2 dark:bg-purple-600 dark:hover:bg-purple-700 dark:focus:ring-purple-900 hover:cursor-pointer">Edit</button> {" "}
                                <button type="button" className="focus:outline-none text-white bg-red-700 hover:bg-red-800 focus:ring-4 focus:ring-red-300 font-medium rounded-lg text-sm px-5 py-2.5 me-2 mb-2 dark:bg-red-600 dark:hover:bg-red-700 dark:focus:ring-red-900 hover:cursor-pointer">Delete</button>
                            </td>
                        </tr>
                    </tbody> */}
                </table>
            </div>
            {/* CRUD Table - End */}
        </>
    )
}

export default CRUD