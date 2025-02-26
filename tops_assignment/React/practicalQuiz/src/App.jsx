import './App.css'
import CRUD from './component/CRUD'
import QuizLogic from './Quiz_logic/QuizLogic'
import { Route, Routes } from 'react-router'

function App() {

	return (
		<>
			{/* <QuizLogic /> */}
			{/* <CRUD /> */}
			<Routes>
				<Route path='/' element={<CRUD />} />
				<Route path='/quiz' element={<QuizLogic />} />
			</Routes>
		</>
	)
}

export default App