import { Route, Routes } from 'react-router'
import Home from './reactRouting/Home'
import Header from './reactRouting/Header'
import About from './reactRouting/About'
import Contact from './reactRouting/Contact'

function App() {

	return (
		<>
			<Header />
			<Routes>
				<Route path='/' element={<Home />}/>
				<Route path='/home' element={<Home />}/>
				<Route path='/about' element={<About />}/>
				<Route path='/contact' element={<Contact />}/>
			</Routes>
		</>
	)
}

export default App
