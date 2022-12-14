#include <iostream>

/**
    FUNCTIONS: they are created in order to avoid copy pasting
    and combine specific logic
*/

/// Here is first int is => return type
/// max_two ==> id, (int a, int b) ==> args, {} ==> scope, inside {} ==> body

int max_two(int a, int b) {
    std::cout << "Hello from max function" << std::endl;
    return a > b ? a : b;
}

int min_two(int a, int b) {
    std::cout << "Hello from min function" << std::endl;
    return a > b ? b : a;
}
void assignment_operator() {
    int x;
    int y = 1; /// y(1), y{1}, y = {1}
    std::cout << (x = 2) << std::endl; /// precedence: 16, from right-to-left
    /// <<, >> precedence: 7, from left-to-right
    int z = 0;
    std::cout << (z = 3) << std::endl; // this idea can be used in the following
    x = y = z = 4;
    std::cout << x << " " << y << " " << z << std::endl;
}

void arithmetic_operators() {
    /// +, -  =>  precedence: 6, from left-to right
    int a = 1;
    int b = 2;
    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;

    /// /,*,% => precedence: 5, from left-to-right
    int x = 4;
    int y = 2;
    std::cout << x / y << std::endl;
    std::cout << x * y << std::endl;
    std::cout << x % y << std::endl;

    /**
            Note 1: In C++, division of two integers will also return integer: 7 / 3 = 2
            Note 2: Remainder operator should be applied only to integer types: 7 % 3 = 1
    **/
}

void compound_assignment_arithmetic_operators() {
    /// +=, -=, *=, /=, %=   => precedence: 16, same as assignment operator, from right-to-left
    int x = 4;
    int y = 2;
    std::cout << (x += y) << std::endl;
    std::cout << (x -= y) << std::endl;
    std::cout << (x /= y) << std::endl;
    std::cout << (x *= y) << std::endl;
    std::cout << (x %= y) << std::endl;

    // This idea can be used to update multiple variables. For example (let x, y and z be 5 by default):
    int z = 6;
    z /= x += y *= z %= x -= 3;
}

void increment_decrement_operators() {
    /// postfix operators: x--, x++ => precedence: 2, from left-to-right
    /// postfix operators return previous value of the variable

    /// prefix operator: ++x, --x => precedence: 3, from right-to-left
    /// prefix operators return new value of the variable
    int a = 1;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
}

void comparison_operators() {
    /// ==, !=  => precedence: 10, from left-to-right
    /// <, >, <=, >=  => precedence: 9, from left-to-right
    /**
        Note: these operators are used to compare
            numbers, they return boolean value which indicates
            the result of the comparison
    **/
    int x = 4;
    int y = 6;
    std::cout << (x < y) << std::endl;
    /// prints out 1 (true)
    std::cout << (y == x) << std::endl;
    /// prints out 0 (false)
}

void logical_operators() {
    /// !, logical not  ==> precedence: 3, from left-to-right
    /// &&, logical and ==> precedence: 14, from left-to-right
    /// ||, logical or ==> precedence: 15, from left-to-right

    /**
        Note: these operators are used to calculate the
            values of logical expressions. Boolean values are
            passed to these operators, and the output is also a
            Boolean value.
    */
    bool x = true;
    bool y = false;
    std::cout << (x && y) << std::endl;
    // prints out 0 (false)
    std::cout << (x || y) << std::endl;
    // prints out 1 (true)
    y = !y;
    std::cout << (x && y) << std::endl;
    // prints out 1 (true)
}

void sizeof_operator() {
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(1ull) << std::endl;
    std::cout << sizeof('a') << std::endl;

    /**
        Note: sizes of these types are not standardized, i.e. they can be different, but the following rule must
            be preserved:
                         sizeof(short) ≤ sizeof(int) ≤ sizeof(long) ≤ sizeof(long long)
    **/
}

void bitwise_operator() {
    /// ~, bitwise not ==> precedence: 3, from left-to-right
    int a = 3;
    std::cout << ~a << std::endl;
    /// >>, << bitwise shifts  ==> precedence: 7, from left-to-right
    int x = 5;
    int y = 2;
    std::cout << (x >> y) << std::endl;
    std::cout << (x << y) << std::endl;
    /// &, bitwise and ===> precedence: 11, from left-to-right
    std::cout << (x & y) << std::endl;
    /// |, bitwise or ===> precedence: 13, from left-to-right
    std::cout << (x | y) << std::endl;
    /// ^, bitwise xor ===> precedence: 12, from left-to-right
    std::cout << (x ^ y) << std::endl;

    /**
        Note: these operators are used to operate with bits
            of the variables.

    **/

    /**
     Semantics:
        • ~a returns bitwise invertion of the number.
        • a & b, a | b, a ^ b applies and, or and xor
        operations to the variables a and b respectively.
        • a << b, a >> b shifts the binary
        representation of the number a by b bites to the
        left and right respectively.
    **/


    /**
     Note: there is a compound assignment version of
        each binary bitwise operator:
        &=, ^=, |=, <<=, >>=
        Precedence: 16
        Associativity: right-to-left (same as every other
        assignment operator)
     **/
}

void ternary_operator() {
    /// a ? b : c ternary operator ===> precedence: 16, from left-to-right
    /// a -  boolean, b and c should be the same type or convertible to the same type
    /// it returns b if a is true, else c
    int a = 1;
    int b = 2;
    int max_of_two = (a > b) ? a : b;
    std::cout << max_of_two << std::endl;
}

void cast_operator() {
    /// (type) , ==> precedence: 3, from right-to-left
    std::cout << (int) 5.6 << std::endl;
    std::cout << (int)'a' << std::endl;
}


void scope_resolution() {
    /// ::, ==> precedence: 1, left-to-right
//    std::cout << (...) << std::endl;
}

void operator_function_call() {
    /**
        In order to call your function, you should use operator function call:
            func_id(arg1, arg2, …, argn);
            Precedence: 2
            Associativity: left-to-right
            Note:
            arguments are not guaranteed to be calculated sequentially from left to right!
    **/
}