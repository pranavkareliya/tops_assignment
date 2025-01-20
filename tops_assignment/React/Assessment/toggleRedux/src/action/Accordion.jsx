import React from 'react';
import { useSelector, useDispatch } from 'react-redux';
import { toggleAccordion } from './action';

const Accordion = () => {
    const accordions = useSelector((state) => state.accordions);
    const dispatch = useDispatch();

    const handleToggle = (id) => {
        dispatch(toggleAccordion(id));
    };

    return (
        <div>
            {accordions.map((accordion) => (
                <div key={accordion.id} style={{ marginBottom: '10px', border: '1px solid #ccc', borderRadius: '5px' }}>
                    <div
                        style={{ padding: '10px', backgroundColor: '#f0f0f0', cursor: 'pointer' }}
                        onClick={() => handleToggle(accordion.id)}
                    >
                        {accordion.title}
                    </div>
                    <div
                        style={{
                            display: accordion.isVisible ? 'block' : 'none',
                            padding: '10px',
                            backgroundColor: '#fff',
                        }}
                    >
                        {accordion.body}
                    </div>
                </div>
            ))}
        </div>
    );
};

export default Accordion;