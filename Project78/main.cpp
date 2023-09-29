#include<iostream>
using namespace std;

// GLOBAL VARIABLE:
// A Global variable exists in the program for the entire time of the program is executed.

// LOCAL VARIABLE:
// A Local variable is created when the function is executed. 
// once the execution is finished, the variable is destroyed.
// It can be accessed throughout the program by all the functions present in the program.


// Scope rules:

// int main()
// {
//   int num{100};                   // Local to main..
//   int num1{500};                  // Local to main...

//   cout << " Local num is: " << num << " in main " << endl;

//   {
//     // creates a new level of scope
//     int num {200};    // Local to this inner block...
//     cout << " Local num is: " << num << " in inner block in main " << endl;
//     cout << " Inner block in main can see out - num1 is: " << num1 << endl;
//   }

//   cout << " Local num is: " << num << " in main " << endl;
// }

// Static variables:

// LIFETIME: So the lifetime of the static variable is lifetime of the program.
// The space for the static variable is allocated only one time.
// This is used for the entirety of the program.

void static_local_example()
{
  static int num{6000};
  cout << " \nLocal static num is: " << num << " in static_local_example - start " << endl;
  num += 1000;
  cout << " Local static num is: " << num << " in static_local_example - end " << endl;
}

int main()
{
  static_local_example();
}