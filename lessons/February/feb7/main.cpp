#include <iostream>
#include <fstream>
#include <sstream>

/**
 write a program to read text file and
 write in another text file
 **/

void do_it() {
    std::ofstream out("a.txt"); /// create file
    if (!out) {
        std::cout << "File created successfully...\n";
    }
    std::ifstream in("a.txt");
    out << "I am writing to ...\n";
    std::cout << "Writing to file successfully completed...\n";
    out.close();

    /// open another file
    std::cout << "opening second file to write...\n";
    out.open("b.txt");
    std::string ch;
    while (in >> ch) { /// reading file
        out << ch << " "; /// writing to file
    }
    std::cout << "writing to the second file successfully completed...\n";
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
    std::ifstream file("file.txt");
    int line_sum = 0;
    int count_word = 0;
    size_t count_char = 0;
    std::string temp;
    std::string line;
    while (std::getline(file, line)) {++line_sum;}
    file.clear();
    file.seekg(std::ifstream::beg);
    while (file >> temp) {
        ++count_word;
        count_char += temp.size();
    }
    std::cout << line_sum << std::endl;
    std::cout << count_word << "\n" << count_char;
    file.close();
    return 0;
}