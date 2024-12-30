import React from 'react'

function ListView() {

    const list = ["Use Array.map", "Not for a loop", " Give each item a unique key", "Avoid using array index as the key"];

    return (
        <>
            <div>
                <h2>
                    <u>
                        List Show using Map Function
                    </u>
                </h2>
                {
                    list.map((i, index) => {
                        return <h3 key={index}>{i}</h3>
                    })
                }
            </div>
        </>
    )
}

export default ListView