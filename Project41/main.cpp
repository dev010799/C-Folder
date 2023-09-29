#include<iostream>
using namespace std;

// PASS BY ADDRESS :
// It is used when we want to modify actual parameters.
// In this formal parameters are pointers.
// Formal params can indirectly modify actual parameters .
// void swap(int *a , int *b){
//   int temp;
//   temp = *a;
//   *a = *b;
//   *b = temp;
// }

// int main(){
//   int x {10};
//   int y {20};
//   swap(&x,&y);

//   cout << x   << "\t" << y << endl;

// }


// PASS BY REFERENCE:

// AVOID complex code writing in pass by reference.
// call by reference is also used for modifying actual parameters but it can be used only for simple functions.

// void swap(int &a , int &b){

//   cout << &a << "\t" << &b;
//   int temp;
//   temp = a;
//   a = b;
//   b = temp;
// }

// int main(){
//   int x {10};
//   int y {20};
//   swap(x,y);

//   cout << &x  << "\t" << &y << endl;

//   cout << x   << "\t" << y << endl;
//   return 0;

// }

void swap(int &a , int &b){

  cout << &a << "\t" << &b;
  int temp;
  temp = a;
  a = b;
  b = temp;
  
  // If we write complex codes in pass by reference then what happens:
  // Then this function i.e.(int &a , int &b), It may become call by address automatically compilers will change it.
  // So therefore we should not write any complex code inside the functions which are using call by reference.

  for(int i = 0; i < 10; i++)
  cout << i << endl;
}

int main(){
  int x {10};
  int y {20};
  swap(x,y);

  cout << &x  << "\t" << &y << endl;

  cout << x   << "\t" << y << endl;
  return 0;

}
