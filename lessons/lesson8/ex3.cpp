#include <iostream>

void reverse(char* ch) {
	if(*ch != '\0') {
		reverse(ch + 1);
		printf("%c", *ch);
	}
}

int main() {
	char str[50];
    printf("Enter string: ");
    scanf("%s", str);
    printf("Your reversed string: ");
    reverse(str);
    printf("\n");
    return 0;
}