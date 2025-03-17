#include <iostream>

void double_value(int* ptr) {
  *ptr *= 2; // Dereference the pointer to access the actual value
}

int main() {
  int number = 5;
  std::cout << "Before: " << number << std::endl;

  double_value(&number); // Pass the address of 'number' to the function

  std::cout << "After: " << number << std::endl; 

  return 0;
}