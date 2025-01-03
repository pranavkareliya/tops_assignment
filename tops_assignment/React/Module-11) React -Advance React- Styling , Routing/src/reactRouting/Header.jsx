import React from 'react'
import { Link } from 'react-router'

function Header() {
    return (
        <>
            <div className="header">
                <img src="logo.avif" height="40px" width="40px" alt="This is a logo" />
                <div className="header-right">
                    <Link to="/home">Home</Link>
                    <Link to="/about">About</Link>
                    <Link to="/contact">Contact</Link>
                </div>
            </div>
        </>
    )
}

export default Header