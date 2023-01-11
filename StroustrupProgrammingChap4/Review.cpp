//What is a computation?
//the act of producing some outputs based on some inputs, such as producing the result (output) from the argument (input) using the computation function

//what do we mean by inputs and outputs to a computation? Give examples?
//input can come from the keyboard, mouse, other porgrams, from other parts of the program
//output is the display ofthose inputs
//A good example is a calendar. Ther can be input from the user that wants to remember dates, and the output could be those dates in different colors

//what are the three requirments a programmer should keep in mind when expressing computations?
//Correctly, Simple, and Efficiently

//what does an expression do?
//computes a value from a number of operands

//what is the difference between a statement and an expression, as described in this chapter?
//An expression computes a value from a set of operands using operators, whereas are everything that can make up a line (or several lines) of a program

//What is an lvalue? List the operators that require an lvalue. Why do these operators, and not the others, require an lvalue?
//lvalue is the object named length so the assignment expression is read. 
//it is requried to initialize the value of the object named by length.

//what is a constant expression?
//a value that never changes

//What is a literal?
//the values we write in a conventional form whose value is obvious.

//what is a symbolic constant and why do we use them?
//when a constant occurs frequently in a program. When a value is known to complie

//what is a magic constant and why do we use them?
//the anti-pattern of using numbers directly in source code
//the example provided noted, 299792458 is one of the fundamental constants of the universe:
//the speed of light in vacuum measured in meters per second. Most didn't instantly recognize that,
// why would you expect not to be confused and slowed down by that

//what are some operators that we can use for integers and floating point values?
// addition subtraction multiplication division  

//what operators can be used on ints but not on folating point numbers?
//modulus

//what are some operators that can be used on strings?
//most can be used on strings, but modulo

//when should a programmer prefer a switch statement
// A switch-statement generates optimized code for comparing against a set of
//constants. For larger sets of constants, this typically yields more-efficient code
//than a collection of if-statements. However, this means that the case label values
//must be constants and distinct. 

//common problems with the switch-statement
//There are no usage of variables, relational expressions, or floats

//explain each funtion of a for loop
//the keyword For that starts the loop, the condition being tested, and the EndFor keyword that terminates the loop.

//when should a for loop be used and when should a the while loop be used?
//use a for loop for more maintainable code whenever a loop can be defined as a for statemnt with a simple initializer, condition and increment operation
//use a while state only when that's not the case

//how do you print the numeric value of a char
//The char data type was designed to hold a single character. A character can be a single letter, number, symbol, or whitespace.

//describe what the line char foo(int x) means in a function definition
//a function return char, with int x as an argument

//when should you define a separate function for part of a program? list reasons
//when we want to separate computatin with the name because doing so will
//make the computation logically separte
//makes the program text clearer
//makes it possible to use the function in more than one place 
//eases testing

//what can you do to an int that you cannot do to a string
//

//what can you do to a string that you cannot do to a int
//

//what is the inex of the third element of a vector?
//a vector is a sequence of elements that you can access by an index. the thrid element would be represented as [2]

//How do you write a for loop that prints every element of a vector
//intitalize a vector 
//for (int i = 0; i < len.size(); i++){ cout << v[i] }

//Describe ehat push_back() do to a vector
//can grow a vector by adding elements

//what does vector member size() do
//gives the number of elements of the vector

//what makes a vector so useful
//it allows programmers to store data

//how do you sort() the elements of a vector
//a standard library for sorting the elements in a vector