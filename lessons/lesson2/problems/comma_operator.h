int one() {
    std::cout << "Hello from one" << std::endl;
    return 1;
}

int two() {
    std::cout << "Hello from two" << std::endl;
    return 2;
}

int three() {
    std::cout << "Hello from three" << std::endl;
    return 3;
}

void call_comma_operator() {
    std::cout << (one(), two(), three()) << std::endl;
}

/// comma operator ==> precedence: 17, from left-to-right

/**
    Usage:
        Calculates the left argument, then the right
        argument and returns the result of right
        argument
**/