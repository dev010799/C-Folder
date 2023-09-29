#include<iostream>
using namespace std;


// SCOPING RULE:
// :: this is scope resolution operator..

// int x = 10;               // Global variable...
// int main(){

//   int x = 20;             // This is local to the main function...
//   {
//       int x = 30;         // This is local within this block...
//       cout << x << endl;  // Print the nearest value i.e. 30.
//   }

//   cout << x << endl;      // 20 will be printed..
//   cout << :: x << endl;      // global var will be printed.. i.e. 10. // The color of x has also changes..i.e it is global..

//   // So c++ have block level scope..
  
// }

// STATIC VARIABLES:
// Static variables are the variables which remains always in the memory..
// Static variable are accessible only inside the function in which they are declared.
// Imagine that static variables are global but,
// Scope visibility is limited to a function thas it.
// Local variable for function fun() is created i.e. (int a = 5) and destroyed whenever the function is called.
// This is a global variable i.e. (int v = 0) which is remaining there through out the program inside the code section and both these functions can access it.
// But here in this example function func() is accessing and main() is not accessing. But no problem.. 
// Not mandatory that every function should access it..
// A  global variable who can access any function can access how long it will be there as long as the program is running.
// I want this variable i.e. (int v = 0) in (void fun(){})..
// If you bring that variable here, its not global , it became local , it became yes...!
// No I want that to be just like global.
// Two points about Global ( can be accessible everywhere/ It will remain always in the memory).
// I want it to remain always in the memory.
// I dont want it to be accessible by all the functions.
// I want it accessible only by this function i.e void fun() ...
// So write static here in void func() i.e. (static int v = 0).
// Used in functional programming and modular programming.


// Example

// int v = 0;

// void func(){
//   int a = 5;
//   v++;
//   cout << a ;
// }

// main(){
//   func();
//   func();
//   func();
// }


void fun(){

  static int x = 10              // Behaves  Global for this function
  x++;
  cout << x << endl;
}
int main(){

  fun();
  fun();

  
}

