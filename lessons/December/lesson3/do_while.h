
void do_while() {
    int x;
    std::cout << "Input x: ";
    std::cin >> x;

    do {
        std::cout << x << std::endl;
    } while (--x);
}
