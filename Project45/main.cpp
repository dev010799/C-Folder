#include <iostream>
using namespace std;

// Pointer to a Function:
// We know well that we can have pointer to any data type.any primitive datatype, we can have a pointer of type class.
// Can we have a pointer to a function also? yes.
// Normally we define function like void display() and call it in int main() i.e.display() in main().
// This function i.e. display() is called and Hello is displayed and the control is back at main function.

// void display(){

//   cout << " Hello ";

// }

// int main(){

//   display();


// }

// Instead of directly calling with a name , can i use pointer to a function,Let us see...
// I will define pointer to a function and will call it does fp then how it should be, written type is void
// 

// void display (){
//   cout << " Hello ";
// }

// int main(){
  
//   // Declaration:
//   void (*fp) ();               // This is method declaring a pointer to a function & when you declare pointer to a function it must be inside the () brackets Otherwise it will not be a pointer to a function.
//   // Initialization:
//   fp = display;                // Now this will be assigning name of a function to this pointer, So the address of that function will be stored in this pointer
  
//   // function call.

//   (*fp)();

//   // Thats how a pointer can be assign to a function..
// }

// Example Pointer to a function:

int max(int x , int y )               // Used for finding maximum of two integer..
{
  return x > y ? x : y;
}

int min(int x , int y)               // Used for finding minimum of two integer..
{
  return x < y ? x : y;
}

// So if i see the signature of the prototype of max and min are same so is it possible that the next
// The 2 lines are the same (*fp)(10,5)
// But there max and there mmin will be called..
// Different function is called because the pointer is pointing on different functions.
// So this is just like polymorphism
// function overriding internally..
// Function pointer are used for achieving a run time polymorphism using function overriding.
// So this means that 1 function pointer can point on any function which is having same signature.
// Yes a function pointer can point on all those functions which are having same signature.
// In function overriding  function pointer are used for achieving a runtime polymorphism using function overriding.
int main ()
{
  int (*fp) (int , int);           // I will take prototype int instead of max i will say (*fp)  then two integers (int , int)

  fp = max;
  (*fp)(10,5);                     // max function is called

  fp = min;
  (*fp) (10,5);                    // min function is called



}