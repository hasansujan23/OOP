<html lang="en">
<body style="padding:0px;margin:0px;">
<div style="background: #0c2635;">
    <center><h2 style="padding: 10px;color: aliceblue;">Object Oriented Programming</h3></center>
</div>
<div style="width: 1160px;margin:0 auto;padding: 15px;">
	<div>
		<h3>Difference between structure and class</h3>
		<table style="border:1px;">
			<tr>
				<th>Structure</th>
				<th>Class</th>
			</tr>
			<tr>
				<td>Members of a structure are public by default</td>
				<td>Members of a class are private by default</td>
			</tr>
			<tr>
				<td>It does not support inheritance</td>
				<td>Support inheritance</td>
			</tr>
			<tr>
				<td>Structure are value type, They are stored as a stack on memory</td>
				<td>class are reference type. They are stored as heap on memory.</td>
			</tr>
			<tr>
				<td>It can have only parameterized constructor</td>
				<td>It can have all the types of constructor and destructor</td>
			</tr>
			<tr>
				<td>Generally used for smaller amounts of data.</td>
				<td>Generally used for large amounts of data.</td>
			</tr>
		</table>
	</div>
    <div style="padding: 10px;border-left: 4px solid #f0ad4e;border-radius: 3px;">
    <h3>Class:</h3>
    <p style="font-size: 18px;align: justify;">A Class is a user defined data-type which has data members and member functions. Data members are the data variables and member functions are the functions used to manipulate these variables and together these data members and member functions defines the properties and behavior of the objects in a Class. Class is a blueprint of data and functions or methods. There are two ways to define class member functions:</p>
    <ul>
        <li style="font-size: 18px;">Inside Class Defination</li>
        <li style="font-size: 18px;">OutSide Class Definition</li>
    </ul>
    <p style="font-size: 18px;">To define a member function outside the class definition we have to use the scope resolution :: operator along with class name and function name.</p>
    <center><p style="font-size: 18px;">RETURN-TYPE CLASS-NAME :: FUNCTION-NAME(PARAMETERS)</p></center>
</div>
<div>
	<h3>Why is the size of an empty class not zero in C++?</h3>
	<p style="font-size:18px;align:justify;">Size of an empty class is not zero. It is 1 byte generally. It is nonzero to ensure that the two different objects will have different addresses.</p>
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
    <p style="font-size: 18px;text-align: justify;">Data abstraction refers to, providing only needed information to the outside world and hiding implementation details. Using abstract class we can hide the implementation details</p>
	<p style="font-size: 18px;text-align: justify;>Characteristics of Abstruct class</p>
	<ul>
		<li>A class is abstract if it has at least one pure virtual function.</li>
		<li>We can have pointers and references of abstract class type.</li>
		<li>If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.</li>
		<li>An abstract class can have constructors.</li>
	</ul>
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
<div style="padding: 10px;border-left: 4px solid #f0ad4e;border-radius: 3px;margin-top: 10px;">
    <h3>Access modifier:</h3>
    <p style="font-size: 18px;text-align: justify;">Access modifiers or Access Specifiers in a class are used to set the accessibility of the class members. That is, it sets some restrictions on the class members not to get directly accessed by the outside functions.</p>
    <p style="font-size: 18px;text-align: justify;">There are three type of access modifiers:</p>
    <ul>
        <li style="font-size: 18px;">Public: All the class members declared under public will be available to everyone.</li>
        <li style="font-size: 18px;">
            Private: The class members declared as private can be accessed only by the functions inside the class. They are not allowed to be accessed directly by any object or function outside the class. Only the member functions or the friend functions are allowed to access the private data members of a class.
        </li>
        <li style="font-size: 18px;">
            Protected: Protected access modifier is similar to that of private access modifiers, the difference is that the class member declared as Protected are inaccessible outside the class but they can be accessed by any sub-class (derived class) of that class.
        </li>
    </ul>
</div>
<div>
	<h3>Friend class and function in C++</h3>
	<p style="font-size: 18px;">Friend Class: A friend class can access private and protected members of other class in which it is declared as friend. It is sometimes useful to allow a particular class to access private members of other class.</p>
	<p style="font-size: 18px;">Friend Function: Like friend class, a friend function can be given special grant to access private and protected members.</p>
	<P style="font-size: 18px;">A friend function can be:</P>
	<ul>
		<li style="font-size: 18px;">A method of another class</li>
		<li style="font-size: 18px;">A global function</li>
	</ul>
	<p style="font-size: 18px;">Rules for declaring friend function:</p>
	<ol type="i">
		<li style="font-size: 18px;">Create forward reference for the class, which member variables are accessed.</li>
		<li style="font-size: 18px;">Create the class which funtion is going to friend function of another class</li>
		<li style="font-size: 18px;">Create the class which forward reference is being created first</li>
		<li style="font-size: 18px;">Define the friend function with :: resulation operator outside the class. Not define inline function</li>
	</ol>
	<p style="font-size: 18px;">Some important points about friend functions and classes:</p>
	<ol type="1">
		<li style="font-size: 18px;">Friends should be used only for limited purpose. too many functions or external classes are declared as friends of a class with protected or private data, it lessens the value of encapsulation of separate classes in object-oriented programming.</li>
		<li style="font-size: 18px;">Friendship is not mutual. If a class A is friend of B, then B doesn’t become friend of A automatically.</li>
		<li style="font-size: 18px;">Friendship is not inherited</li>
		<li style="font-size: 18px;">The concept of friends is not there in Java.</li>
	</ol>
</div>
</div>
</body>
</html>