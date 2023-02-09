#include <iostream>
#include <cstring>

/// strlen(), strcpy(), strcmp(), strcat()

int main() {
  char name[10] = "Shukrullo";

  char name2[10];

  strcpy(name2, name);
  printf("%s\n", name2);

  std::cout << strcmp(name2, name) << "\n";

  char name3[10];
  strcat(name3, name2);
  printf("%s\n", name3);  
  // printf("%c", *name);     // Output: S
  // printf("%c", *(name+1));   // Output: h
  // printf("%c", *(name+7));   // Output: l

  // char *namePtr;

  // namePtr = name;
  // printf("%c", *namePtr);     // Output: S
  // printf("%c", *(namePtr+1));   // Output: h
  // printf("%c", *(namePtr+7));   // Output: l
}