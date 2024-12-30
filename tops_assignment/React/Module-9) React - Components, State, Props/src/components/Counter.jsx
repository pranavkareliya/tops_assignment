import React from 'react'
import { useState } from 'react'

function Counter({data}) {

    const [count, setCount] = useState(0)

    return (
        <>

			<div className='card'>
				<h3>{data}</h3>
			</div>

			<div className="card">
				<button onClick={() => setCount((count) => count + 1)}>
					Increment
				</button>
			</div>
			<div className='card'>
				Count is : {count}
			</div>
			<div className="card">
				<button onClick={() => setCount((count) => (count !== 0) ? count -1 : 0)}>
					Decrement
				</button>
			</div>
		</>
    )
}

export default Counter