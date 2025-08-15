# OBJECT-ORIENTED PROGRAMMING IN CPP

Aim: To study and implement Classes and Objects.

Tools Used: VS Code or Programiz online compiler.

# Theory

**Object-Oriented Programming System (OOPS) in C++** is a programming paradigm that focuses on creating objects, which represent real-world entities.
Each object contains **data members** (variables) and **member functions** (methods) inside a **class**.

The **key features of OOPS** are:

1. **Encapsulation** – Wrapping data and functions into a single unit (class) to control access and maintain security.
2. **Abstraction** – Exposing only the necessary information to the outside world while hiding internal complexities.
3. **Inheritance** – Enabling new classes to reuse, extend, or modify the features of existing classes.
4. **Polymorphism** – Allowing functions or operators to behave differently based on the type of object.
5. **Modularity** – Breaking the program into smaller, independent parts for better organization.
6. **Reusability** – Classes and methods can be reused in multiple programs without rewriting code.

In C++, classes can have **constructors** (for initialization) and **destructors** (for cleanup).
Access specifiers (**public, private, protected**) define how members are accessed.
OOPS in C++ improves **code readability, maintainability, scalability, and reliability**, making it suitable for large and complex software systems.


# Program-1: Defining a Class
This program demonstrates basic class usage in C++. A class Student is defined with public data members to store student details like name, branch, subject, year, and result. Two objects s1 and s2 are created, and their values are hardcoded. The program then displays the details of both students using cout. It shows how classes act as templates for creating multiple objects with similar properties.

--> Algorithm:

1. Start
2. Define a class `Student` with **public** variables: `name`, `branch`, `subject`, `year`, and `result`.
3. In the `main()` function:
   * Create two objects: `s1` and `s2` of class `Student`.
   * Assign hardcoded values to each data member of `s1` and `s2`.
4. Display all details of `s1` on the console.
5. Display all details of `s2` on the console.
6. End
   

# Program-2: Display Details of Two Cars
This program demonstrates basic class usage in C++ by defining a Car class with public data members: brand, model, year, and cost. It creates two objects, c1 and c2, to store details of two different cars. The program takes user input for each data member of both objects and stores the values directly in the public variables. After collecting the data, it displays all stored details for each car separately. Since the data members are public, they can be accessed and modified directly from the main() function without the need for getter or setter methods. This illustrates the concept of data encapsulation at a basic level but without restricting access to the variables.

--> Algorithm:

1. Start
2. Define a class Car with public data members: brand, model, year, cost.
3. In main(), create an object c1 of class Car.
4. Prompt the user to enter brand, model, year, and cost for c1 and store them.
5. Create another object c2 of class Car.
6. Prompt the user to enter brand, model, year, and cost for c2 and store them.
7. Display the details of c1 (brand, model, year, cost).
8. Display the details of c2 (brand, model, year, cost).
9. End


# Program-3: Rectangle Area Calculation 
This program demonstrates the concept of a class with data members and a member function in C++. The class `Rect` contains public variables `length` and `width`, and a member function `area()` to calculate the area of a rectangle. In `main()`, an object `r1` of class `Rect` is created. The user is prompted to enter the rectangle's length and width, which are stored in the object’s variables. The `area()` function is called by passing these values, and it returns the computed area (`length × width`). Finally, the program displays the calculated area on the screen.

--> Algorithm:

1. Start
2. Define a class `Rect` with:
   * Public variables `length` and `width`
   * A public member function `area(length, width)` that returns `length × width`
3. In `main()`, create an object `r1` of class `Rect`.
4. Prompt the user to enter `length` and store it in `r1.length`.
5. Prompt the user to enter `width` and store it in `r1.width`.
6. Call `r1.area(r1.length, r1.width)` and store/print the result.
7. Display the calculated area.
8. Stop


# Program-4: Simple Calculator
This program demonstrates Object-Oriented Programming in C++ by creating a class `Calc` that performs basic arithmetic operations. The class has two public float variables `num1` and `num2` for storing input values, and four member functions — `add()`, `sub()`, `multi()`, and `div()` — for performing addition, subtraction, multiplication, and division respectively. In `main()`, an object `c1` is created, and the user is prompted to enter two numbers. Each arithmetic operation is then performed by calling the respective member functions with the entered values. The results are displayed on the screen, showing how class methods can encapsulate and organize related operations. This program also shows function overloading with parameters and promotes code reusability by grouping multiple related operations in one class.

--> Algorithm:

1. Start
2. Define a class `Calc` with:
   * Two float variables: `num1`, `num2`
   * Four functions:
     * `add(num1, num2)` → returns sum
     * `sub(num1, num2)` → returns difference
     * `multi(num1, num2)` → returns product
     * `div(num1, num2)` → returns quotient
3. In `main()`, create an object `c1` of class `Calc`.
4. Prompt the user to enter the first number and store it in `c1.num1`.
5. Prompt the user to enter the second number and store it in `c1.num2`.
6. Call the `add()` function and display the result.
7. Call the `sub()` function and display the result.
8. Call the `multi()` function and display the result.
9. Call the `div()` function and display the result.
10. End


# Program-5: Cube Volume (Function inside & outside a class)
This program demonstrates class creation and member function definitions in C++. The class Cube contains a public data member side to store the cube’s side length and two functions for calculating its volume. The first function vol_in() is defined inside the class, while the second function vol_out() is declared inside but defined outside the class using the scope resolution operator ::. The formula used for volume is side × side × side. In main(), the user enters the side length, and the program calculates and displays the volume using both methods. This illustrates the difference between inline and outside-class function definitions in C++.

--> Algorithm:

1. Start
2. Create a class Cube with:
  *Public data member: side (float)
  *Function vol_in(side) to calculate volume (defined inside the class)
  *Function vol_out() to calculate volume (declared inside, defined outside the class)
3. In the main() function:
  *Create an object c1 of class Cube.
  *Ask the user to enter the cube’s side length.
  *Store the input in c1.side.
  *Calculate the volume using vol_in() and display it.
  *Calculate the volume using vol_out() and display it.
4. Stop


# Program-6: 

This program demonstrates the concept of **data members** and **member functions** in C++ classes. A class `Cube` is defined with a private data member `side`, initialized to `5`. It contains a public member function `vol_in()` that calculates and returns the cube’s volume using the formula $\text{side}^3$. In `main()`, an object `c1` of class `Cube` is created. The program then calls `vol_in()` to compute the volume and displays it. It also illustrates data encapsulation, where `side` is private and accessed only through a public method.

--> Algorithm:

1. Start
2. Define a class `Cube` with:
   * A private data member `side` initialized to 5
   * A public member function `vol_in()` to return `side * side * side`
3. In the `main()` function:
   * Create an object `c1` of class `Cube`
   * Call `vol_in()` using the object `c1` and store the result
   * Display the volume of the cube
4. End


# Conclusion

All six programs demonstrate the basic concepts of **Object-Oriented Programming (OOP) in C++**, such as defining classes, creating objects, using **public and private access specifiers**, and implementing **member functions**. The first two programs show storing and displaying data using class attributes. The third program introduces **member functions** to perform calculations (area of a rectangle). The fourth program applies **multiple member functions** for arithmetic operations. The fifth program shows **function definition inside and outside the class**. The sixth program highlights the use of **private data members with a fixed value**. Together, these codes strengthen understanding of encapsulation, object creation, and basic class-based problem-solving in C++.
