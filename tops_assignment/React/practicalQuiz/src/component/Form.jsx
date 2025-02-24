import React, { useEffect, useState } from 'react'
import "./CRUD.css"
import axios from 'axios'


function Form() {

    const [allData, setAllData] = useState([])

    const [id, setId] = useState("")
    const [firstName, setFirstName] = useState("")
    const [lastName, setLastName] = useState("")
    const [formEmail, setFormEmail] = useState("")
    const [formNumber, setFormNumber] = useState("")
    const [formCity, setFormCity] = useState("")
    const [formState, setFormState] = useState("")

    const [dataEdit, setDataEdit] = useState(false)

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
                                <input type="text" id="firstName" value={firstName} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="First Name" />
                            </div>

                            <div className="mb-4">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="lastName">
                                    Last Name
                                </label>
                                <input type="text" id="lastName" value={lastName} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="Last Name" />
                            </div>

                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="email">
                                    Email
                                </label>
                                <input type="email" id="email" value={formEmail} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="EnterYourmail@gmail.com" />
                            </div>
                        </div>

                        <div className="flex justify-center items-center gap-10">
                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="number">
                                    Number
                                </label>
                                <input type="tel" id="number" value={formNumber} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="9898989898" />
                            </div>

                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="city">
                                    City
                                </label>
                                <input type="text" id="city" value={formCity} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="Ahmedabad" />
                            </div>

                            <div className="mb-6">
                                <label className="block text-gray-700 text-sm font-bold mb-2" htmlFor="state">
                                    State
                                </label>
                                <input type="text" id="state" value={formState} className="shadow appearance-none border rounded w-full py-2 px-3 text-gray-700 leading-tight focus:outline-none focus:shadow-outline" placeholder="Gujarat" />
                            </div>
                        </div>

                        <div className="flex items-center justify-between">
                            <button type="button" className="bg-blue-500 hover:bg-blue-700 text-white font-bold py-2 px-4 rounded focus:outline-none focus:shadow-outline hover:cursor-pointer" >
                                {"Add"}
                            </button>
                            <button type="reset" className="bg-gray-500 hover:bg-gray-700 text-white font-bold py-2 px-4 rounded focus:outline-none focus:shadow-outline hover:cursor-pointer">
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
                    </tbody>
                </table>
            </div>
            {/* CRUD Table - End */}
        </>
    )
}

export default Form