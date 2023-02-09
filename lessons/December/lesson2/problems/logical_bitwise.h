bool f_true() {
    std::cout << "Hello from true" << std::endl;
    return true;
}

bool f_false() {
    std::cout << "Hello from false" << std::endl;
    return false;
}

void logical_bitwise_operators() {
    std::cout << (f_false() && f_true()) << std::endl;
    std::cout << (f_false() || f_true())<< std::endl;
    std::cout << (f_false() & f_true()) << std::endl;
    std::cout << (f_false() | f_true()) << std::endl;
}