#include <cstdio>
#include <cstdlib>

int main() {
    int x;
    FILE *file;
    file = fopen("a.txt", "w");
    if (file == nullptr) {
        printf("Error\n");
        exit(1);
    } else {
        printf("Enter number: ");
        scanf("%d", &x);
        fprintf(file, "%d", x);
        fclose(file);
    }
    return 0;
}