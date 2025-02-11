#include <iostream>
int main()
{
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





  std::cout << '\n' << "exercise 4" << '\n';
  int myArray[5][5] = {};
  int *ptr2 = &myArray[0][0];

  for (int j = 0; j < 5; j++){
    for (int k = 0; k < 5; k++){
      if (j == k){
        *ptr2 = 1;
      }else{
        *ptr2 = 0;
      }
      ptr2++;
    }
  }

  ptr2 = &myArray[0][0];
  for (int j = 0; j < 5; j++){
    for (int k = 0; k < 5; k++){
      std::cout << *ptr2;
      ptr2++;
    }
    std::cout << '\n';
  }



}


