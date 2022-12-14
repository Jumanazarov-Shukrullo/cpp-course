void if_else_functionality() {
    {
        int x;
        std::cout << "Input x: ";
        std::cin >> x;
        if (x % 3 != 0) {
            std::cout << x << " is not divisible by 3" << std::endl;
        }
        if (x % 2 != 0) {
            std::cout << x << " is not divisible by 2" << std::endl;
        }
    }
    {
        int y;
        std::cout << "Input y: ";
        std::cin >> y;
        if (y % 3 == 0) {
            std::cout << y << " is divisible by 3" << std::endl;
        } else if (y % 2 == 0) {
            std::cout << y << " is divisible by 2" << std::endl;
        } else if (y % 5 == 0) {
            std::cout << y << " is divisible by 5" << std::endl;
        }
    }
    {
        int z;
        std::cout << "Input z: ";
        std::cin >> z;
        if (z % 3 == 0) {
            std::cout << z << " is divisible by 3" << std::endl;
        } else if(z % 3 == 1) {
            std::cout << z << " mod = 1" << std::endl;
        } else {
            std::cout << z << " is not divisible by 3 and not mod = 1" << std::endl;
        }
    }
}