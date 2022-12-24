#include <iostream>
#include <cstring>
#include <fstream>

// void reverse(char* ch) {
// 	if(*ch != '\0') {
// 		reverse(ch + 1);
// 		printf("%c", *ch);
// 	}
// }

int main(int argc, char* argv[]) {
    std::ifstream in("stepik_solutions/a.txt");
    int counter = 0; 
	char ch;
	const char str[1024]  ="ahalj1fhal5dhfa";
	for(int i = 0; i< strlen(str); i++){
		if (str[i] >= '0' && str[i] <= '9'){
			std::cout<<str[i]<<std::endl;
			++counter;
		}
	}
	// while(in.get(ch)) {
	// 	if (ch >= '0' && ch <= '9')
	// 		++counter;
	// }
	std::cout << counter << "\n";
    return 0;
}