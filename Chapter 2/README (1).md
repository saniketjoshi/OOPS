# Object-Oriented Programming with C++ — Unit II: Inheritance

**Student Name:** [Devesh Manoj Nehete]
**PRN:** [126UAD2008]
**Class/Division:** S.Y. B.Tech. (Artificial Intelligence and Data Science) / Div. [F]
**Course Name:** Object-Oriented Programming with C++ (ADPC303)
**Unit:** II — Inheritance

## How to Compile and Run

```bash
g++ -std=c++17 <filename>.cpp -o program
./program
```

On Windows (MinGW):

```bash
g++ -std=c++17 <filename>.cpp -o program.exe
program.exe
```

## List of Programs

| Sr. No. | File Name | Program Title | Main Concept |
|---|---|---|---|
| 1 | `01_single_inheritance.cpp` | Basic Single Inheritance | Base and derived classes |
| 2 | `02_protected_access.cpp` | Protected Member Access | `protected` access specifier |
| 3 | `03_public_vs_private_inheritance.cpp` | Public versus Private Inheritance | Inheritance access modes |
| 4 | `04_multilevel_inheritance.cpp` | Multilevel Inheritance | Three-level class hierarchy |
| 5 | `05_hierarchical_inheritance.cpp` | Hierarchical Inheritance | One base, multiple derived classes |
| 6 | `06_multiple_inheritance.cpp` | Multiple Inheritance | Two base classes combined |
| 7 | `07_ambiguity_resolution.cpp` | Multiple-Inheritance Ambiguity | Scope-resolution operator |
| 8 | `08_constructor_destructor_order.cpp` | Constructor and Destructor Order | Object lifecycle in inheritance |
| 9 | `09_parameterized_base_constructor.cpp` | Parameterized Base Constructor | Initializer list |
| 10 | `10_function_overriding.cpp` | Function Overriding | `virtual` and `override` |
| 11 | `11_abstract_class.cpp` | Abstract Class | Pure virtual function |
| 12 | `12_virtual_base_class.cpp` | Virtual Base Class | Diamond inheritance problem |
| 13 | `13_friend_class.cpp` | Friend Class | Special cross-class access permission |
| 14 | `14_nested_class.cpp` | Nested Class | Class defined inside another class |
| 15 | `15_vehicle_rental.cpp` | Mini-Project: Vehicle Rental | Integrated inheritance and polymorphism |
| 16 | `16_employee_payroll.cpp` | Mini-Project: Employee Payroll | Abstract base class with overriding |

## Program Descriptions

1. **Basic Single Inheritance** — Implements a `Person` base class and a `Student` derived class to show the basic "is-a" relationship and member access through inheritance.
2. **Protected Member Access** — Shows how a `protected` member of a base class (`Employee`) can be accessed inside a derived class (`Developer`) but not from outside code.
3. **Public versus Private Inheritance** — Compares `public` and `private` inheritance modes to show how they change the accessibility of inherited base-class members.
4. **Multilevel Inheritance** — Builds a three-level hierarchy (`Person` → `Employee` → `Manager`) where each level adds its own data and behavior.
5. **Hierarchical Inheritance** — Derives two different classes, `Car` and `Bike`, from a single common base class `Vehicle`.
6. **Multiple Inheritance** — Combines two base classes, `Academic` and `Sports`, into a single `Student` class that inherits from both.
7. **Multiple-Inheritance Ambiguity** — Resolves a name clash between two base classes' identically named `display()` functions using the scope-resolution operator.
8. **Constructor and Destructor Order** — Demonstrates that base-class constructors run before derived-class constructors, and destructors run in the reverse order.
9. **Parameterized Base Constructor** — Shows how a derived class passes arguments to its base class's parameterized constructor using an initializer list.
10. **Function Overriding** — Uses a `virtual` function in a `Vehicle` base class, overridden by `Car` and `Boat`, to demonstrate run-time polymorphism through overriding.
11. **Abstract Class** — Defines an abstract `Shape` class with a pure virtual `area()` function, implemented differently by `Rectangle` and `Circle`.
12. **Virtual Base Class** — Solves the diamond-inheritance ambiguity problem using `virtual` inheritance so that `TeachingAssistant` has only one copy of `Person`.
13. **Friend Class** — Uses a `friend class` (`Auditor`) to grant one class special access to another class's (`Account`) private data.
14. **Nested Class** — Defines a `Department` class nested inside a `University` class to model a "belongs to" relationship at the type level.
15. **Mini-Project: Vehicle Rental** — Combines inheritance, virtual functions, and overriding to build a small rental-rate calculator for `Car` and `Bike` objects.
16. **Mini-Project: Employee Payroll** — Uses an abstract `Employee` base class with `PermanentEmployee` and `ContractEmployee` derived classes to calculate salaries polymorphically.

## Notes

- All programs are written in standard C++17 and compile without warnings using `g++ -std=c++17`.
- Each `.cpp` file contains inline comments explaining key statements and design decisions.
- Add screenshots of your compiled output (terminal or IDE) to a `screenshots/` folder if your submission requires visual proof of execution, and reference them here, e.g. `![Program 1 Output](screenshots/01_output.png)`.
