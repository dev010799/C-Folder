#include<iostream>
#include<vector>
using namespace std;

// unsigned long long factorial(unsigned long long);

// unsigned long long factorial(unsigned long long n)
// {
//   if(n == 0)
//     return 1;                          // Base case
//   return n * factorial(n - 1);         // Recursive case.
// }

// int main()
// {
//   int num{10};
//   cout << " Value of num is " << num << endl;
//   cout << " sizeof of num is " << sizeof num << endl;
//   cout << " Address of num is " << &num << endl;

// int *p;                                                                 // This is pointer to an integer..
// cout << " Value of p is " << p << endl;    // geneates garbage value..
// cout << " Address of p is: " << &p << endl;
// cout << " sizeof p is: " << sizeof p << endl;

// p = nullptr;
// cout << " \nValue of p is: " << p << endl;

// int *p1 {nullptr};
// double *p2 {nullptr};
// unsigned long long *p3{nullptr};
// // vector<string> *p4{nullptr};
// string *p5 {nullptr};

// // on my machine 8bytes and i can represent any address of any variable.
// // So value 8 is print all the way down..
// // because all i need is 8 bytes to represent any address on my machine..
// cout << "\n sizeof p1 is: " << sizeof p1 << endl;
// cout << " sizeof p2 is: " << sizeof p2 << endl;
// cout << " size of p3 is: " << sizeof p3 << endl;
// // cout << " size of p4 is " << sizeof p4 << endl;
// cout << " size of p5 is " << sizeof p5 << endl; 

// int score{10};
// double high_temp{100.7};

// int *score_ptr {nullptr};

// score_ptr = &score;
// cout << " value of score is " << score << endl;
// cout << " Address of score is: " << &score << endl;
// cout << " Value of score_ptr is: " << score_ptr << endl;

// // score_ptr = &high_temp;                                         // this shows compiler error..

//  return 0;
// }

// int main()
// {
//   // int score {100};
//   // int *score_ptr{&score};

//   // cout << *score_ptr << endl;

//   // double high_temp{100.7};
//   // double low_temp{37.4};

//   // double *temp_ptr{&high_temp};
//   // cout << *temp_ptr << endl;               // 100.7
  
//   // temp_ptr = &low_temp;
//   // cout << *temp_ptr << endl;
// // =======================================================================
//   // Dereferencing a Pointer:

//   // string name { "Frank"};

//   // string *string_ptr {&name};
//   // cout << *string_ptr << endl;

//   // name = "James";
//   // cout << *string_ptr << endl;

// // ====================================================================
//   // int score{100};
//   // int *score_ptr{&score};

//   // cout << score << endl;
//   // cout << *score_ptr << endl;
//   // cout << &score << endl;

// // ==================================================================

// //  cout << " \n ------------------------------------------------------" << endl;
// //  double high_temp{100.3};
// //  double low_temp{37.4};
// //  double *temp_ptr{&high_temp};

// //  cout << *temp_ptr << endl;
// //  temp_ptr = &low_temp;
// //  cout << *temp_ptr << endl;

// // ==================================================================
// }

// VECTOR POINTER:

int main()
{
  // vector<string>stooges{"Larry","Moe","Curly"};
  // vector<string> *vector_ptr{nullptr};

  // vector_ptr = &stooges;                                      // Here Iam initializing vector pointer to point somewhere...

  // cout << " First stooge " << (*vector_ptr).at(0) << endl;
  // cout << " Stooges: ";

  // for(auto stooge: *vector_ptr)
  //   cout << stooge << " ";
  // cout << endl;

  // cout << endl;
  // return 0;

  // int *int_ptr{nullptr};
  // int_ptr = new int;
  // cout << int_ptr << endl;
  // cout << *int_ptr << endl;

  // *int_ptr = 100;
  // cout << int_ptr << endl;

  // ====================================================================
  // Using new[] to allocate storage for an array:

  int *array_ptr{nullptr};                           // Assigning NULL value means pointer is not pointing to any memory location...
  int size{};

  cout << " How big do you want the array?";
  cin >>  size;

  array_ptr = new int[size];                         // allocate array on heap...

  // We can access the array here
  // We'll see how in a few slides

  // Using delete [] array_ptr:

  int *array_ptr {nullptr};
  int size{};

  cout << " How big do you want the array ";
  cin >> size;

  array_ptr = new int [size];

  

  delete[] array_ptr;                              // free allocated storage.

  



}


