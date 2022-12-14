
void while_loop() {
    int x;
    std::cout << "Input x: ";
    std::cin >> x;

    while (x % 7) {  /// while (x % 7 != 0) ==>
        std::cout << "x still is not divisible by 7. Current x: " <<
        x-- << std::endl;
    }
    std::cout << "Now x is divisible by 7: x = " << x << std::endl;
}