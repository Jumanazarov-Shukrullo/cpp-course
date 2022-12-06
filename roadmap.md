# Course roadmap


## Block 1: C++ Basics

### General informations:
- What is C++
- C++ versions, other related languages
- What is program
- Program structure:
    - Alphabet of the language
    - Main function
- Types of errors in C++:
    - Compilation error (`CE`):
        - Lexical error
        - Syntax error
        - Semantic error
    - Runtime errors (`RE`)
    - Undefined behaviour (`UB`)
- CMake compiler
    - Setting up empty project in CLion with CMake
    - Splitting project into multiple files

### Declarations & Definitions:
- Fundamental types
- Identifiers
- Literals
- Variable definition, declaration point
- Implicit type conversions
- Visibility scope and variable lifetime
- Signed and usigned integer variables
- Functions:
    - Declaration vs definition
    - One definition rule
    - Passing arguments and getting the result from functions
    - Recursion
    - `void` type
    - `return` keyword
- `const` qualifier:
    - Variables
    - Rule: everything that can be const __must__ be const
- ASCII table

### Expressions:
- Operators:
    - Assignment operator, concept of lvalue and rvalue in C ++ 03
    - Arythmetical operators
    - Сompound assignment operators
    - Increment and decrement operators
    - Comparison operators
    - Logical operators
    - Operator sizeof
    - Bitwise operators, storing integer types in memory
    - ternary operator
    - C-style case
    - Scope resolution operator
    - Function call operator
    - Comma operator
    - Operator precedence and associativity
    - Function call operator
    - Cast operators: `static_cast`, `reinterpret_cast`, `const_cast`, `dynamic_cast`

### Control sequences:
- If, else if, else
- Loops: for, while, do while
- Switch/case
- Continue

### Arrays and pointers:
- Arrays
- `operator []`
- Initializing arrays using initializer list
- Declaration point of array
- What happens at the physical level with stack memory:
    - When defining variables
    - When defining arrays
    - Stack (in memory):
        - Grows from top to bottom
        - Size restrictions
- Address in memory
- Unary `operator &`
- Pointers, how to create them
- `Operator *`
- Implementation of `operator []` through `operator *` when working with arrays
- `const` qualified pointers: `const pointer` VS `pointer to const` VS `const pointer to const`
- Operations with pointers pointer arithmetics
- Dynamic memory
    - Operators `new`, `new []`, `delete`, `delete []`
    - Memory leak, double deallocation problem
- Passing arguments by value vs by pointer

### References:
- The swap function implementation on pointers
- The concept of reference
- The assignment dilemma: **to create a reference when assigning** or **to copy an object**, difference of approaches in **Python**, **Java**, **Javascript** and **C ++**
- Passing aruments inside the function by references
- Swap function implementation on references
- Common mistake: returning a reference to a local object from a function (why this is bad)
- `const` qualified references


## Block 2: OOP in C++

### Classes and structures:
- Structures: motivation (example: `coordinates`), other examples (examples: `std::vector`, `std::cin`, `std::cout`, `std::string`)
- Member-fields (variables)
- Methods, `static` methods, `const` methods
- Object (aka instance of struct) VS struct itself.
- Keyword `this`
- Constructors:
    - Default
    - Copy constructor
    - Shadowing, solution to the problem:
        - Renaming
        - Using keyword `this`
        - Initializer list (also the solution to the problem of initializing constants and references)
    - Rules for default generation of constructors by the compiler
    - The default and delete keywords (also for methods)
    - The `explicit` keyword
    - Delegating constructors
- Destructors.
- `const` qualified member fields and references as member fields, problem with initializing them (problem: default constructor is deleted if const field is uninitialized)
    - solution 1: `default initialization`
    - solution 2: Constructor initializer list
- `static` member (motivation and example)
- Encapsulation
- Sections: `private` & `public`
- `class` vs `struct`
- Passing objects by const reference (how and why)
- Allocating instances on heap, array of instances
- Operators `.` and `->`, details
- Getters (returning `const` reference vs `non-const`) and setters
- Differently qualified methods (example: method `std::vector::at`)
- Operator overloading:
    - Assignment operator, it's signature and common implementation. Rule of three.
    - The idea of overloading operators
    - Operator overloading using the classes `vector` (3D math vector, not `std::vector` analogue), `array` (`std::array` analogue) and `bigint` as an example:
        - Arithmetic operators
            - The problem with the correctness of expressions like `x + y = z;` and `-x = y;`.
            - The problem in the case when the left operand is not a class object (expressions like `5 + x`).
        - Compound assignments, correct signatures
        - Overloading logical operators.
        - Overloading bitwise operators, including overloading operators << and >> using stream I / O as an example.
        - Comparison operators overloading.
        - Overloading cast operators.
    - Overloading of the `operator[]`: `const` and `non-const` versions.
    - Overloading of a static_cast operator. Another use for the `explicit` keyword.
    - Overloading the `operator()`. Why is it n-ary? What's the signature? The concept of the functor.
- Using built-in classes: `std::vector`, `std::array`, `std::string`, `std::stringstream`, type `size_t`, range-based for-loop (basics).
- `enums`, using `switch/case` on enums
- Anti-patterns: `friend keyword`, `mutable keyword`, `using namespace std::` (and why it is bad), solution: `using std::...`
– Namespaces

### Templates:
- Functions specialization
- What are templates (motivation):
    - Template classes and functions, examples
- Template specializations:
    - The principle: `particular is preferable to general`
    - The principle is `the exact match is better`
    - Partial and full specializations
    - Function specialization vs template function specialization
    - Compiler selection rules for specialization and overloading candidates 
- Template parameters that are not types (example: `std::array`). Template template parameters
- `typedef` keyword
- `using` keyword: template and non-template `using` versions
-  template recursion: ideas and usage (example: function `print_all`)

### Inheritance:
- Inheritance declaration:
    - `protected` access modifier.
    - Difference between `private`, `public` and `protected` inheritance.
    - Difference between `class` inheritance and `struct`.
    - Keyword `final`
- Finding names when inheriting:
    - Hiding names of the base class methods.
    - Explicit call of the parent methods of the inheritor (Using `operator ::`).
    - The order in which constructors and destructors are called in inheritance. The problem with the initialization of the parents when defining the constructor of the inheritor, again using the initializer lists to solve it.
    - Multiple inheritance, ambiguity with it, diamond inheritance problem. Examples of disambiguation using type conversions and the `operator ::`.
- Typecasting between parent and child:
    - Trimming when copying, casting pointers, casting references.
    - Operator `dynamic_cast`
- `virtual` functions, their general idea and difference from non-virtual ones:
    - Features of allocation of classes with `virtual` functions in memory
    - `virtual` inheritance.
    - Concept of the `v-table`
    - `virtual` destructor and its purpose
- The concept of dynamic polymorphism, polymorphic classes
- Placement in memory of classes
- Abstract classes:
    - `pure virtual` functions, their features.
    - `pure virtual` destructor (and why it causes the linker error).
    - Keyword `override`.
    - keyword `final` (for methods)
- Curiously recurring template pattern 

### Exceptions:
- General idea:
    - Motivation for using exceptions.
    - The `throw` statement and the `try/catch` block.
    - Examples of standard operators that throw exceptions.
- Difference between exceptions and runtime errors. Errors that are not exceptions and exceptions that are not errors.
- Rules for catching and re-throwing exceptions, casting types when catching exceptions. Catching all exceptions. The rules for choosing a catch block by the compiler in the case when different blocks are suitable.
- Copying when throwing and catching exceptions. Features of catching exceptions by value and by reference.
- Old-style exception specifications and their problems, unexpected exceptions. C++ 11 style exception specifications, `noexcept` operator and specifier. Conditional noexcept.
- Exceptions in constructors and the problem of memory leaks on exceptions.
- Exceptions in destructors.
- Security guarantees for exceptions: basic and strict.


## Block 3: Modern Standards of C++

### Memory management:
+ Operators `new`, `delete`, `new[]`, `delete[]`, recap and how they work in details
+ Alignas new
    + Size of structures
    + Alignof
    + Alignas specifier
+ Lifecycle of the data
+ Nothrow `operator new`
+ Raw data allocation and deallocation
+ Calling destructor explicitly
+ Operator placement new, calling constructor explicitly
+ `std::construct_at`, `std::destroy_at`
+ Operator `new` VS function "operator new"
+ Signature of the function "operator new"
+ Array versions of functions "operator new" and "operator delete"
+ Replacing functions "operator new" and "operator delete", motivation, example
+ Memory allocation mechanism, its interface
+ `std::allocator`
+ `std::allocator_traits`: motivation, typedefs and methods, usage
+ Custom allocators: motivation, examples
+ Comparison of different common custom allocators

### Move semantics:
+ Rvalues and lvalues in C++07 (recap), troubles with them (examples)
+ Temporary objects
+ General idea of the new value mechanism in C++11: solving troubles of C++07
+ Rvalue references
+ `std::move`, invalidation of the initilial objects after move
+ Move constructor, its signature and implementation
+ Move assignment operator, its signature and implementation
+ Default move constructor and move assignment operator
+ The rule of **three/five/zero**
+ Copy elision, RVO, NRVO
+ Complete and incomplete tyeps
+ Universal references
+ `std::remove_reference`
+ `std::move` implementation
+ `std::forward`, its implementation
+ Value categories in C++11: `glvalue`, `rvalue`, `lvalue`, `prvalue`, `xvalue`
+ Reference qualifiers
+ Noexcept specifiers in C++17, conditional noexcept specifiers in C++17, potentially throwing functions in C++17, noexcept operator in C++17

### Smart pointers:
+ Motivation
+ `std::auto_ptr`
+ `std::unique_ptr`
+ `std::shared_ptr`
+ `std::make_shared`, `std::make_unique`
+ `std::allocate_shared`, `std::allocate_unique`
+ `std::weak_ptr`
+ Deleters
+ `std::enable_shared_from_this`

### STL containers and iterators:
+ Three-way comparison operator `<=>`
+ `std::allocator<vt>::rebind<vt2>`, example of usage and motivation
+ STL Containers: overview of three types of containers
+ `std::array`
+ `std::vector`
+ Iterators, concept and motivation
    + Input iterator
    + Output iterator
    + Forward iterator
    + Bidirectional iterator
    + Random access iterator
    + Contiguous iterator
    + const and reverse iterators
    + `std::iterator`
    + `std::reverse_iterator`
    + `std::iterator_traits`
+ `std::deque`
+ `std::stack`
+ `std::queue`
+ `std::set`
+ `std::map`
+ `std::unordered_...` and `std::multi_...`

### Type deduction and metagprogramming, type traits:
+ `static_assert`
+ Type traits:
    + `std::is_const`
    + `std::true_type`, `std::false_type`
    + `std::is_same`
    + `std::conjunction`
    + `std::rank`
    + `std::default_constructible`
    + `std::copy_constructible`
    + `std::move_constructible`
    + `std::assignable`
    + `std::copy_assignable`
    + `std::move_assignable`
    + `std::is_destructible`
    + `std::is_nothrow_...`
+ C++17 version: `std::..._v`
+ Keyword `auto`
+ Keyword `decltype`
+ `decltype(auto)`
+ Compile-time calculations
+ `constexpr` keyword
+ `consteval` and `constinit` keywords
+ C++ 20 concepts, `concept` and `require` keywords
+ `if constexpr`
+ `SFINAE`
+ `std::enable_if`
+ `std::is_class`, its implementation
+ `std::allocator_traits::construct` implementation
+ `std::declval`
+ `std::move_if_noexcept`
+ Example: iterator type deduction
+ `std::is_base_of`
+ `std::common_type`
+ Typelist: motivation, implementation and examples

### Lambda-functions:
+ Pointers to functions
+ Pointers to members
+ Header `<functional>`
+ Motivation: callbacks (`std::sort`, `std::accumulate`, etc...)
+ Lambda-function
    + Capture list:
        + `this` capturing
        + capture by reference
        + `mutable` in capture lists
        + capture with assigning: capture moved object as rvalue reference, capture as const lvalue reference with `std::as_const()`
        + Capture by default (and why it is an anti-pattern)
    + Return value, example: decltype of argument, received by auto in return value
    + Auto in parameters, example: `std::forward<decltype(a)>`, where `a` is received by `auto&&`
    + `std::function`
    + `std::bind`
    + `std::invoke`
    + `std::invoke_result`

### Utility, numerics and ranges libraries:
+ `std::optional`
+ `std::any`
+ `std::variant`
+ `std::format`
+ Mathematical special functions (C++17)
+ Mathematical constants (C++20)
+ Numeric algorithms
+ Pseudo-random number generation
+ Date and time
+ Ranges library

