#include <iostream>
int main()
{
  std::cout << "exercise 1" << '\n';
  int array[10] = {}; //pt 1a init array

  for (int i = 0; i < 10; i++){ //pt 1b filling array
    array[i] = i;
  }

  for (int i = 0; i < 10; i++){ //1c printing array out
    std::cout << array[i] << '\n';
  }

  int* ptr = array;//1d filling array from 100
  for (int s = 0; s < 10; s++){
    *ptr = 100 + s;
    std::cout << *ptr << '\n'; //1e print new values
    ptr++;
  }

  std::cout << '\n' << "exercise 4" << '\n';
  int myArray[5][5] = {}; //init array
  int *ptr2 = &myArray[0][0]; //init ptr2 and set it to the start the array

  for (int j = 0; j < 5; j++){ //start array from row 0 and increment
    for (int k = 0; k < 5; k++){ //same but for columns
      if (j == k){ //if j and k are equal go into open brackets
        *ptr2 = 1; //at the spot where the pointer is set value to 1
      }else{ //if j!=k
        *ptr2 = 0; //set it zero
      }
      ptr2++; //increment ptr to the next column
    } //leave loop when we get to 5th iteration
  }

 ptr2 = &myArray[0][0]; //reset pointer
  for (int j = 0; j < 5; j++){ //go through the array
    for (int k = 0; k < 5; k++){ //still going through it
      std::cout << *ptr2 << ' '; // print the values
      ptr2++; //increment ptr2
    }
    std::cout << '\n';
  }

  std::cout << '\n' << "pt e" << '\n';
  int tempRow[5]; //just looking at the fifth row here
  ptr2 = &myArray[0][0]; //put the pointer to the first value in the first row
  for (int j = 0; j < 5; j++){ //increment through it
    tempRow[j] = *(ptr2 + j); //add where i am to a temparay row
  }

  ptr2 = &myArray[4][0]; //set the pointer to the first value in the last row
  for (int j = 0; j < 5; j++){ //increment through it
    *(myArray[0] + j) = *(ptr2 + j); //take where the ptr is and add it to the first row
  }

  ptr2 = &tempRow[0]; //set ptr to the temp row
  for (int j = 0; j < 5; j++){ //standard for loop
   *(myArray[4] + j) = *ptr2; //add where the ptr is to the last row
    ptr2++; //increnment ptr
  }

  //simpple print statements and formatting
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      std::cout << myArray[i][j] << " ";
    }
    std::cout << '\n';
  }
  return 0;
}