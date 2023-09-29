#include<iostream>
#include<vector>
using namespace std;

// Smart pointers in c++(example):
// int main()
// {
//   int a = 9;                      // Normal integer variable..
//   int *p;                         // Declare pointer variable..
//   p = &a;                              // p is a pointer variable which stores the address of a..

//   cout << " Value of variable a is " << a << endl;
//   cout << " Address of p " << p << endl;
//   cout << " value of pointer variable p " << *p << endl;

//   *p = 7;
//   cout << " Value of the variable is now " << *p << endl;

//   *p = 8;
//   cout << " Value of the variable is now " << *p << endl;

// }

// ====================================================================================================

// References Example:
// Alias for variable ..
// cannot be null...
// very useful as function parameters...
// once initialized cannot be made to refer to a different variable..
// ===================================================================================================
// using references in range - based for loop:


  // vector <string> stooges {"Larry", "Moe", "Curly"};

  // for(auto &str:stooges)
  //     str = "Funny";

  // for(auto str: stooges)
  //     cout << str << endl;               // "Funny", "Funny", "Funny"

  // ====================================================================================================

  // vector<string> stooges {"Larry", "Moe","Curly"};

  // for (auto const &str:stooges)
  //     str = "Funny"                      // Compiler Error...

  // ========================================================================================================

  //  int main()
  //  {
  //   vector<string> stooges {"Larry", "Moe","Curly"};

  //   for (auto const &str:stooges)
  //     str = "Funny"; 
  //  }   
// =====================================================================================================
  // int main() 
  // {
  //   int num{100};                             // num is ALIAS to ref...
  //   int &ref{num};                           // ref is an ALIAS  to num ....

  //   cout << num << endl;
  //   cout << ref << endl;

  //   num = 200;
  //   cout << ref << endl;
  //   cout << num << endl;

  //   ref = 300;
  //   cout << num << endl;
  //   cout << ref << endl;

  //   num = 400;
  //   cout << ref << endl;
  //   cout << num << endl;
  // } 

  // =========================================================================================================

  // int main()
  // {

  // // In this reference case actually we can change to copy of funny not the actual i.e {"Larry", "Moe", "Curly"}
  // vector<string> stooges{"Larry","Moe", "Curly"}; 
  // for (auto str:stooges)
  // str = "Funny";                               // str is a COPY of the each vector element..

  // for (auto str:stooges)                       // No change
  // cout << str << endl;

  // cout << " \n -------------------------------------------------------------------------------------- " << endl;
  // for(auto &str: stooges)                  // str is a reference to each vector element i.e. for {"Larry","Moe","Curly"}
  // str = " Funny ";

  // for(auto const &str:stooges)            // Notice we are using const
  // cout << str << endl;                    // Now the vector  elements have changed

  // cout << endl;
  // return 0;
  // }

  // ==============================================================================================================

  // L- value and R-value

 int main()
 {



  // ===========================================================================
//    int x {100};              
//   int y {0};              

//   y = 100;                  // r - value 100 assigned to l - value y...

//   x = x + y;                 // r - value 200 assigned to l - value x...
// =============================================================================

// The references we've used are l-value references
// Because we are referencing l values

  //  int x {100};

  //  int &ref1 = x;                       // ref1 is reference to l-value
  //  ref1 = 1000;

  //  int &ref2 = 100;                     // Error 100 is an r-value 

  // ===============================================================================

  // .The Same when we pass-by-reference

  int square(int &n)
  {
    return n * n;
  }

  int num{10};

  square(num);                    // OK
  square(5);                      // Error - can't reference r - value 5  // and we must reference l - value...


 }





   



