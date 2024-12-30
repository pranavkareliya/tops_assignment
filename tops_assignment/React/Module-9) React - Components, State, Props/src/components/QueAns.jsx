import React from 'react'

function QueAns() {
    return (
        <>
            <div className='App'>
                <h2>1. What is React Js?</h2>
                <h4>
                    React is a JavaScript library that helps developers build user interfaces (UIs) for websites.
                </h4>
            </div>
            <div className='App'>
                <h2>2. What is NPM in React Js?</h2>
                <h4>
                    NPM (Node Package Manager) is a package manager that's essential for React development. It helps developers manage dependencies, scripts, and other project configurations. It's used to install, update, and manage third-party libraries and packages.
                </h4>
            </div>
            <div className='App'>
                <h2>3. What is Role of Node Js in react Js?</h2>
                <h4>
                    Node.js is a web technology that's often used with React.js to build full-stack JavaScript applications. It manages the server-side logic, including API endpoints, interacting with databases, and serving files.
                </h4>
            </div>
            <div className='App'>
                <h2>4. What is CLI command In React Js?</h2>
                <h4>
                    CLI (Command Line Interface) tools in React are command-line tools that help developers automate repetitive tasks and streamline their development workflow. They are typically used to create, build, test, and deploy React applications from the command line.
                </h4>
            </div>
            <div className='App'>
                <h2>5. What is Components in React Js?</h2>
                <h4>
                    Components are reusable building blocks that define what's displayed on the user interface (UI). They accept inputs called props and return React elements that describe the UI. Mainly two types of components : - <br />
                    i. Functional Component <br />
                    ii. Class Component
                </h4>
            </div>
            <div className='App'>
                <h2>6. What is Header and Content Components in React Js? </h2>
                <h4>
                    Header component is a navigation component that displays information and actions for the current screen, while a content component is a reusable piece of code that can be used to build user interface elements.
                </h4>
            </div>
            <div className='App'>
                <h2>7. How to check version of NPM? </h2>
                <h4>
                    To check the version of NPM, you can use the command-line interface (CLI) and type npm --version
                </h4>
            </div>
            <div className='App'>
                <h2>8. How to check version of React Js? </h2>
                <h4>
                    The package.json contains metadata about our project. It is created by default when we create our React project. OR write this structure in js / jsx File. `{React.version}`
                </h4>
            </div>
            <div className='App'>
                <h2>9. How to change in components of React Js?  </h2>
                <h4>
                    We have to set initial state value inside constructor function and set click event handler of the element upon which click, results in changing state. Then pass the function to the click handler and change the state of the component inside the function using setState.
                </h4>
            </div>
        </>
    )
}

export default QueAns