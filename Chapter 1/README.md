# Object-Oriented Programming with C++ — Unit I: Basics of OOP

**Student Name:** Devesh Manoj Nehete
**PRN:** [126UAD2008]
**Class/Division:** S.Y. B.Tech. (Artificial Intelligence and Data Science) / Div. [F]
**Course Name:** Object-Oriented Programming with C++ (ADPC303)
**Unit:** I — Basics of OOP (Data Types, Control Structures, Functions, Classes & Objects)

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
| 1 | `01_basic_data_types.cpp` | Basic Data Types | int, char, float and cout |
| 2 | `02_if_else.cpp` | if-else | Selection / conditional statement |
| 3 | `03_loop_and_array.cpp` | Loop and Array | for loop with array traversal |
| 4 | `04_functions.cpp` | Functions | Function prototype, definition, and call |
| 5 | `05_class_and_object.cpp` | Class and Object | Class definition, data members, member function, dot operator |
| 6 | `06_constructor_destructor.cpp` | Constructor and Destructor | Automatic object initialization and cleanup |
| 7 | `07_static_member.cpp` | Static Member | Class-level shared data using static |
| 8 | `08_inline_and_friend_function.cpp` | Inline and Friend Function | Inline getter and friend function for private data access |

## Program Descriptions

1. **Basic Data Types** — Declares an `int` roll number, a `char` grade, and a `float` fee, and prints each using `cout` to demonstrate C++'s fundamental data types.
2. **if-else** — Checks a student's marks against a passing threshold and prints "Pass" or "Fail" using an if-else selection statement.
3. **Loop and Array** — Stores five students' marks in an array and prints all of them using a `for` loop, demonstrating array indexing and iteration.
4. **Functions** — Declares a function prototype for `add()`, defines it separately from `main()`, and calls it to add two numbers, showing function reuse and the role of `return`.
5. **Class and Object** — Defines a `Student` class with `name` and `age` data members and a `show()` member function, then creates an object and accesses its members using the dot operator.
6. **Constructor and Destructor** — Demonstrates that a class's constructor runs automatically when an object is created and its destructor runs automatically when the object goes out of scope.
7. **Static Member** — Uses a `static` data member to count how many objects of a class have been created, showing that static members are shared across all objects.
8. **Inline and Friend Function** — Combines an `inline` getter function for fast, controlled access to a private member with a `friend` function that can access the same private member directly.

## Notes

- All programs are written in standard C++17 and compile without warnings using `g++ -std=c++17`.
- Each `.cpp` file contains inline comments explaining key statements.
- Add screenshots of your compiled output (terminal or IDE) to a `screenshots/` folder if your submission requires visual proof of execution, and reference them here, e.g. `![Program 1 Output](screenshots/01_output.png)`.
