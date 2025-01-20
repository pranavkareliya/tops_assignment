import React from 'react';
import { Provider } from 'react-redux';
import store from './store/store';
import Accordion from './action/Accordion';

const App = () => (
	<Provider store={store}>
		<div style={{ maxWidth: '600px', margin: '50px auto' }}>
			<Accordion />
		</div>
	</Provider>
);

export default App;