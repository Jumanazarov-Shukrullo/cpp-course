bool is_even(int);
bool is_odd(int);

bool is_even(int n) {
//    return n % 2 == 0;
    return n == 0 ? true : is_odd(n - 1);
}

bool is_odd(int n) {
//    return n % 2 == 1;
    return n == 0 ? false : is_even(n - 1);
}


//void f(int); /// ==> declaration
//void g(int n) {
//    std::cout << n << std::endl;
//} /// ==> definition