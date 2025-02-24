import React from 'react'

function PracticalQuizQuestion() {
    return (
        <>
            <div>
                React JS Practical Coding Test Quiz
                1. Build a Functional Component with Props
                Task:
                Create a React component named Greeting that takes a name prop and renders a greeting message:
                Hello, [name]!

                Example: If name="Alice", it should render "Hello, Alice!"
                2. State Management with useState Hook
                Task:
                Create a functional component that implements a counter. The component should:

                Display the current count.
                Have two buttons: one to increment the count and another to decrement it.
                Use useState to manage the count.
                3. Handling Events
                Task:
                Create a React component that:

                Displays a button labeled "Toggle Message".
                When clicked, it toggles the visibility of a message: "React is Awesome!".
                Use useState for managing the message visibility.
                4. List Rendering
                Task:
                Create a component that accepts an array of strings (e.g., a list of tasks or names) as a prop and displays them as a list using map().

                Example input: ["Task 1", "Task 2", "Task 3"]
                Example output: A list of the three tasks.
                5. Conditional Rendering
                Task:
                Create a component that accepts a boolean prop isLoggedIn. If isLoggedIn is true, render "Welcome back, User!". If false, render "Please log in".

                6. Form Handling
                Task:
                Create a React form with:

                Two input fields: one for name and one for email.
                A submit button.
                When the form is submitted, display the name and email values below the form.
                Ensure the fields are not empty when the form is submitted.
                7. useEffect Hook
                Task:
                Create a component that:

                Fetches user data from a mock API endpoint (https://jsonplaceholder.typicode.com/users) using fetch.
                Displays the list of users in a ul element.
                Use the useEffect hook to fetch the data once when the component is mounted.
                8. React Router Implementation
                Task:
                Set up a simple React Router configuration with two pages:

                A Home page that displays "Welcome to the Home Page".
                An About page that displays "About Us".
                Use react-router-dom for navigation and link between the pages using Link components.
                9. Context API
                Task:
                Create a simple app with the Context API. The app should have a ThemeContext that manages a theme state (light or dark):

                Create a ThemeProvider component that provides the theme to the rest of the app.
                Create a ThemeToggle button that switches between light and dark modes when clicked.
                The theme should be passed down to the ThemeDisplay component, which should display the current theme.
                10. Component Reusability
                Task:
                Create a reusable Card component. The Card component should:

                Accept title, content, and footer props.
                Render the card with a title, content, and footer sections.
                Then, use this Card component multiple times in a parent component with different props for each instance.

                11. React.memo for Performance Optimization
                Task:
                Create a parent component that renders multiple child components. Each child component should accept a message prop and render it. Wrap the child component in React.memo to prevent unnecessary re-renders when the message prop does not change.

                12. Todo List App
                Task:
                Create a simple Todo List App that includes:

                A text input to add a new task.
                A button to add the task to the list.
                A list of tasks, where each task can be marked as completed by clicking on it.
                A button to remove tasks from the list.
                Store tasks in the component state.
                Bonus Task:
                13. Pagination
                Task:
                Create a simple pagination component that:

                Accepts an array of items as props (e.g., a list of users or posts).
                Displays only a limited number of items per page (e.g., 5 items per page).
                Adds pagination controls to navigate between pages.

            </div>
        </>
    )
}

export default PracticalQuizQuestion