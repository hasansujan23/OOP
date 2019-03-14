<html lang="en">
<body style="padding:0px;margin:0px;">
<div style="background: #0c2635;">
    <center><h2 style="padding: 10px;color: aliceblue;">Object Oriented Programming</h3></center>
</div>
<div style="width: 1160px;margin:0 auto;padding: 15px;">
    <div style="padding: 10px;border-left: 4px solid #f0ad4e;border-radius: 3px;">
    <h3>Class:</h3>
    <p style="font-size: 18px; text-align: justify;">A Class is a user defined data-type which has data members and member functions. Data members are the data variables and member functions are the functions used to manipulate these variables and together these data members and member functions defines the properties and behavior of the objects in a Class. Class is a blueprint of data and functions or methods. There are two ways to define class member functions:</p>
    <ul>
        <li style="font-size: 18px;">Inside Class Defination</li>
        <li style="font-size: 18px;">OutSide Class Definition</li>
    </ul>
    <p style="font-size: 18px;">To define a member function outside the class definition we have to use the scope resolution :: operator along with class name and function name.</p>
    <center><p style="font-size: 18px;">RETURN-TYPE CLASS-NAME :: FUNCTION-NAME(PARAMETERS)</p></center>
</div>
<div style="padding: 10px;border-left: 4px solid #f0ad4e;border-radius: 3px;margin-top: 10px;">
    <h3>Object:</h3>
    <p style="font-size: 18px;">Objects are basic run-time entities in an object oriented system, objects are instances of a class these are defined user defined data types.</p>
</div>
<div style="padding: 10px;border-left: 4px solid #f0ad4e;border-radius: 3px;margin-top: 10px;">
    <h3>Encapsulation:</h3>
    <p style="font-size: 18px;text-align: justify;">Wrapping up(combing) of data and functions into a single unit is known as encapsulation. The data is not accessible to the outside world and only those functions which are wrapping in the class can access it. This insulation of the data from direct access by the program is called data hiding or information hiding.</p>
</div>
<div style="padding: 10px;border-left: 4px solid #f0ad4e;border-radius: 3px;margin-top: 10px;">
    <h3>Data abstraction:</h3>
    <p style="font-size: 18px;text-align: justify;">Data abstraction refers to, providing only needed information to the outside world and hiding implementation details.</p>
</div>
<div style="padding: 10px;border-left: 4px solid #f0ad4e;border-radius: 3px;margin-top: 10px;">
    <h3>Inheritance:</h3>
    <p style="font-size: 18px;text-align: justify;">inheritance is the process by which objects of one class acquire the properties of objects of another class. It supports the concept of hierarchical classification. Inheritance provides re usability.</p>
</div>
<div style="padding: 10px;border-left: 4px solid #f0ad4e;border-radius: 3px;margin-top: 10px;">
    <h3>Polymorphism:</h3>
    <p style="font-size: 18px;text-align: justify;">polymorphism means ability to take more than one form. An operation may exhibit different behaviors in different instances. The behavior depends upon the types of data used in the operation. C++ supports operator overloading and function overloading. The process of making an operator to exhibit different behaviors in different instances is known as operator overloading. Function overloading is using a single function name to perform different types of tasks. Polymorphism is extensively used in implementing inheritance.</p>
	<p style="font-size: 18px;text-align: justify;">In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form. Real life example of polymorphism, a person at a same time can have different characteristic. Like a man at a same time is a father, a husband, a employee. So a same person posses have different behavior in different situations. This is called polymorphism.</p>
	<p style="font-size: 18px;text-align: justify;">In C++ polymorphism is mainly divided into two types:</p>
	<ul>
		<li>Compile time polymorphism:
			<ul>
				<li>Function Overloading: When there are multiple functions with same name but different parameters then these functions are said to be overloaded.</li>
				<li>Operator Overloading: C++ also provide option to overload operators. For example, we can make the operator (‘+’) for string class to concatenate two strings. We know that this is the addition operator whose task is to add to operands. So a single operator ‘+’ when placed between integer operands, adds them and when placed between string operands, concatenates them.</li>
			</ul>
		</li>
		<li>Run time Polymorphism:
		<ul>
			<li>Function overriding: on the other hand occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.</li>
		</ul>
		</li>
	</ul>
</div>
<div style="padding: 10px;border-left: 4px solid #f0ad4e;border-radius: 3px;margin-top: 10px;">
    <h3>Dynamic Binding:</h3>
    <p style="font-size: 18px;text-align: justify;">In dynamic binding, the code to be executed in response to function call is decided at runtime. C++ has virtual functions to support this.</p>
</div>
<div style="padding: 10px;border-left: 4px solid #f0ad4e;border-radius: 3px;margin-top: 10px;">
    <h3>Message Passing:</h3>
    <p style="font-size: 18px;text-align: justify;">Objects communicate with one another by sending and receiving information to each other. A message for an object is a request for execution of a procedure and therefore will invoke a function in the receiving object that generates the desired results. Message passing involves specifying the name of the object, the name of the function and the information to be sent.</p>
</div>
</div>
</body>
</html>