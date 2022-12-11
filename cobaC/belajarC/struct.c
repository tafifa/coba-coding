#include <stdio.h>

int main(void) {
  struct Person {
    char* firstName;
    // Write your code below
    char* lastName;
    int age;
  };
  
  // Write your code below
  struct Person person1;
  person1.firstName = "Ada";
  person1.lastName = "Lovelace";
  person1.age = 22;

  printf("%s", person1.firstName);
}