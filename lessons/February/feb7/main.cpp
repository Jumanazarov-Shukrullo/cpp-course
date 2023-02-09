#include <iostream>
#include <fstream>
#include <sstream>

/**
 write a program to read text file and
 write in another text file
 **/

void do_it() {
    std::ofstream out("a.txt"); /// create file
    std::ifstream in("a.txt");
    out << "I am writing to ...\n";
    out.close();
    /// open another file
    out.open("b.txt");
    std::string ch;
    while (in >> ch) { /// reading file
        out << ch << " "; /// writing to file
    }
    in.close();
    out.close();
}

/**
    Write a program that computes the number of words
    that you have inputted from the given file
**/

int just_do_it() {
    std::ifstream file("file.txt");
    std::string str, sss;
    std::cout << "Enter the word you want to count: ";
    std::cin >> str;
    int counter = 0;
    while (file) {
        file >> sss;
        if (str == sss) {
            ++counter;
        }
    }
    if (counter == 0) {
        std::cout << "The word that you inputted not found in file(;";
        exit(0);
    } else {
        return counter;
    }
}

/**
    write a program that counts all the characters i.e size, number of words and line
    from the given file
**/

void do_job() {
    std::ifstream file("file.txt");
    auto counter_lines = 1, word = 1;
    char ch;
    int size;
    /// here we bring file pointer to the end
    file.seekg(0, std::ios::end);
    size = file.tellg(); /// count number of bytes till the end
    file.seekg(0, std::ios::beg); /// come back
    while (file) {
        file.get(ch);
        if (ch == ' ' || ch == '\n')
            ++word;
        if (ch == '\n')
            counter_lines++;
    }
    std::cout << size << std::endl;
    std::cout << counter_lines << std::endl;
    std::cout << word << std::endl;
    file.close();
}

int main() {

    return 0;
}