const initialState = {
    accordions: [
        {
            id: 1,
            title: 'What is your return policy?',
            body: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.',
            isVisible: false
        },
        {
            id: 2,
            title: 'How do I track my order?',
            body: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi',
            isVisible: false
        },
        {
            id: 3,
            title: 'Can I purchase items again?',
            body: 'Lorem ipsum dolor sit amet, consectetur adipiscing elit.',
            isVisible: false
        },
    ],
};

const accordionReducer = (state = initialState, action) => {
    switch (action.type) {
        case 'TOGGLE_ACCORDION':
            return {
                ...state,
                accordions: state.accordions.map((accordion) =>
                    accordion.id === action.payload
                        ? { ...accordion, isVisible: !accordion.isVisible }
                        : { ...accordion, isVisible: false }
                ),
            };
        default:
            return state;
    }
};

export default accordionReducer;