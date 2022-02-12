import "./App.css";
import {
  Routes,
  BrowserRouter as Router,
  Route,
  Navigate,
} from "react-router-dom";
import Dashboard from "./pages/Dashboard/Dashboard";
import About from "./pages/About/About";
import HowTo from "./pages/HowTo/HowTo";
import Analyze from "./pages/Analyze/Analyze";
import Navbar from "./component/Navbar/Navbar";
import Contact from "./pages/Contact/Contact";
import Output from "./pages/Output/Output";

const App = () => {
  return (
    <Router>
      <Navbar />
      <Routes>
        <Route path="/dashboard" element={<Dashboard />} />
        <Route path="/about" element={<About />} />
        <Route path="/howto" element={<HowTo />} />
        <Route path="/analyze" element={<Analyze />} />
        <Route path="/contact" element={<Contact />} />
        <Route path="/output" element={<Output />} />
        <Route path="*" element={<Navigate to="/dashboard" />} />
      </Routes>
    </Router>
  );
};

export default App;
