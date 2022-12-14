void if_case() {
    int n;
    std::cin >> n;
    if (n % 5 == 0) {
        std::cout << "n is divisible by 5" << std::endl;
    } else if (n % 5 == 1 || n % 5 == 3) {
        std::cout << "n mod is odd" << std::endl;
    } else {
        std::cout << "n mod is even" << std::endl;
    }
}

void switch_case() {
    int n;
    std::cin >> n;

    switch(n % 5) {
        case 0:
            std::cout << "n is divisible by 5" << std::endl;
            break;
        case 1:
        case 3:
            std::cout << "n mod is odd" << std::endl;
            break;
        default:
            std::cout << "n mod is even" << std::endl;
            break;
    }
}