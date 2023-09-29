#include<iostream>
using namespace std;

int main()
// {
//   int a = 10;
//   int *p = &a;              // Declaring and Initializing pointer...

//   cout << a << endl;     // a = 10;
//   cout << &a << endl;    // address of a 
//   cout << p << endl;     // p is a pointer which is storing the address of a
//   cout << &p << endl;    // address of p 
//   cout << *p << endl;    // The data where p is pointing i.e. p is pointing on " a " and " a " contains 10

//   return 0;
// }

 //----------------------------------------------------------
// CREATE ARRAY IN HEAP:
// {
//   int *p = new int[5];        // An array of size 5 will created in heap..
//   p[0] = 1;
//   p[1] = 4;
//   cout << p[1] << endl;
  
//   delete []p;
//   p = nullptr;               // In modern c++ dont use NULL 

//   return 0;
// }
// ------------------------------------------------------------

// BENEFIT OF HAVING ARRAY IN A HEAP:

//  Whenever user uses my program he will give the number of elements and that size array is created..
// {
//   int size;
//   cout << " Enter number of elements ";
//   cin >> size;
//   // int A[size];

//   int *p = new int[size];

//   cout << " Enter new size ";
//   cin >> size;
//   p = new int[size];

//   return 0;
// }

{
  // int *p = new int[20];

  // delete []p;
  // p = new int[40];
  int var1 = 3;
  cout << &var1 << endl;



  
}