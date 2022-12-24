#include <iostream>

/// strlen(), strcpy(), strcmp(), strcat()

int main() {
  char name[] = "Shukrullo";

  printf("%c", *name);     // Output: S
  printf("%c", *(name+1));   // Output: h
  printf("%c", *(name+7));   // Output: l

  char *namePtr;

  namePtr = name;
  printf("%c", *namePtr);     // Output: S
  printf("%c", *(namePtr+1));   // Output: h
  printf("%c", *(namePtr+7));   // Output: l
}