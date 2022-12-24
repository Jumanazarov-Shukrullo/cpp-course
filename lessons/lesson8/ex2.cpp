#include <iostream>

int main() {
	// char str[6];
	// str = "hello"; // Error assigning values to the string is not possible
	// /// Instead we can use strcpy(), which we will see later

	// scanf function
	char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);

    /// fgets and puts functions
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    
	return 0;
}