# C++ Exercises

---

## Module 00

**Exercise 00** (Megaphone): C++ program that takes command-line arguments and prints them in uppercase.
If no arguments are given, it prints a default loud message instead.

**Exercise 01** (My Awesome PhoneBook): Simple terminal-based phonebook using C++ classes.
It can store up to 8 contacts and allows the user to add, search, and display contact details.
The interface is text-based and handles user input through three commands: ADD, SEARCH, and EXIT

**Exercise 02** (The Job Of Your Dreams): Reimplement the missing Account.cpp file for a banking system, using the provided `Account.hpp` and `tests.cpp`.
You must reverse-engineer the implementation based on the header and test behavior.
The goal is to match the output to a reference log file, ensuring your class logic works as expected.

---

## Module 01

**Exercise 00** (BraiiiiiiinnnzzzZ): Difference between stack and heap allocation in C++ by implementing a `Zombie` class.
You create zombies dynamically with `newZombie()` and automatically with `randomChump()`, and observe how memory management and destructors behave.

**Exerrcise 01** (Moar brainz!): Builds on dynamic memory in C++ by creating a function `zombieHorde()` that returns a heap-allocated array of `Zombie` objects.
Each zombie is initialized with the same name and can announce itself.
Proper deletion of the horde is required to avoid memory leaks.

**Exercise 02** (HI THIS IS BRAIN): Pointers and references in C++.
You declare a string, a pointer to it, and a reference to it, then print their memory addresses and values.
It helps clarify how references and pointers behave similarly in memory handling.

**Exercise 03** (Unnecessary violence): Demonstrates the use of references vs. pointers in class design.
You implement a `Weapon` class and two humans (`HumanA`, always armed with a reference; and `HumanB`, optionally armed via a pointer).
It highlights how object relationships affect flexibility and memory safety.

**Exercise 04** (Sed is for losers): C++ program that reads a file, replaces all occurrences of a given string `s1` with another string `s2`, and writes the result to a new file named `<filename>.replace`.
You must avoid using `std::string::replace()` and C file APIs, relying only on other `std::string` and C++ file stream functions.

**Exercise 05** (Harl 2.0): Implement a `Harl` class that reacts to complaint levels ("DEBUG", "INFO", "WARNING", "ERROR") by printing specific messages.
You must use pointers to member functions to call the correct complaint method based on the input string, avoiding if/else chains.
The goal is to practice dynamic dispatch using function pointers in C++.

**Exercise 06** (Harl filter): Extends the previous Harl class by implementing a filter that shows messages starting from a given severity level up to the highest.
It uses a switch statement to control which messages are displayed based on the user’s input.
If the input level is unrecognized, it prints a default message about ignoring insignificant complaints.

---

## Module 02

**Exercise 00** (My First Class in Orthodox Canonical Form): Implement a `Fixed-point` number class in Orthodox Canonical Form with basic constructors, destructor, and getters/setters for its raw value.
It focuses on practicing copy constructor, copy assignment operator, and destructor while managing a fixed-point value stored as an integer.
The class simulates fixed-point arithmetic with 8 fractional bits and outputs debug messages to track object lifecycle events.

**Exercise 01** (Towards a more useful fixed-point number class): Extends the `Fixed-point` class by adding constructors to convert from int and float to fixed-point representation, and member functions to convert back to float and int.
It also overloads the output stream operator to print the fixed-point number as a float.
It makes the Fixed class practical for real numeric conversions and output.

**Exercise 02** (Now we’re talking): Enhances the `Fixed` class by overloading all comparison, arithmetic, and increment/decrement operators to work naturally with fixed-point numbers.
It also adds static min and max functions to return the smaller or larger of two Fixed instances.
It makes the Fixed class fully operable like a numeric type with comparisons and math.

**Exercise 03** (BSP): Introduces a `Point` class using fixed-point numbers to represent 2D coordinates.
It also implements a function bsp that checks if a given point lies strictly inside a triangle defined by three vertices.
The function returns true only if the point is inside, excluding points on edges or vertices.

---

## Module 03

**Exercise 00** (Aaaaand... OPEN!): Implement a `ClapTrap` class with basic game-like behavior: it can attack, take damage, and repair itself.
Each action costs or affects energy and hit points, and appropriate messages must be printed to trace the behavior.
Constructors and destructor should also log when they are called.

**Exercise 01** (Serena, my love!): Extends `ClapTrap` by introducing a derived class `ScavTrap` with custom constructors, destructor, and `attack()` behavior.
It overrides default values and adds a new function `guardGate()` that activates Gate Keeper mode.

**Exercise 02** (Repetitive work): Adds a `FragTrap` class inheriting from `ClapTrap`, with new default attributes, a unique `highFivesGuys()` method, and custom constructor/destructor messages.
It reinforces inheritance and constructor chaining concepts.

**Exercise 03** (Now it’s weird!): Introduces multiple inheritance by creating a `DiamondTrap` that inherits from both `FragTrap` and `ScavTrap`, combining their attributes and behavior.
It overrides the name attribute, adds a `whoAmI()` method to display both names, and tests understanding of diamond inheritance and name resolution.

---

## Module 04

**Exercise 00** (Polymorphism): Runtime polymorphism in C++ by using base class pointers to call overridden functions (`makeSound()`) in derived classes `Dog`, `Cat`.
It also demonstrates the consequences of missing virtual functions through the `WrongAnimal`/`WrongCat` pair.



