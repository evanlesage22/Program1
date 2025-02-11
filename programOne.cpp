#include <iostream>
int main() {

  int array[10] = {}; //pt 1a init array

  for (int i = 0; i < 10; i++) //pt 1b filling array
  {
    array[i] = i;
  }

  for (int i = 0; i < 10; i++) //1c printing array out
  {
    std::cout << array[i] << '\n';
  }

  int* ptr = array;//1d filling array from 100
  for (int s = 0; s < 10; s++)
  {
    *ptr = 100 + s;
    std::cout << *ptr << '\n'; //1e print new values
    ptr++;
  }
}
