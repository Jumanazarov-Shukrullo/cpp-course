void for_loop() {
//    for (int i = 0; i < 9; ++i) {
//        std::cout << i << " ";
//    }
//    std::cout << std::endl;
//    for (int i = 0; i < 9; i += 2) {
//        std::cout << i << " ";
//    }
//    for(;;) {
//        std::cout << "Hi!" << std::endl;
//    }
    int x = 3;
    for(; x--; std::cout << "Hi!" << std::endl);
    int y = 3;
    while(std::cout << "Hi!" << " ", --y);
}
