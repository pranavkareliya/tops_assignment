import { createStore } from 'redux';
import accordionReducer from '../reducer/reducer';

const store = createStore(accordionReducer);

export default store;