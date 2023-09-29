#include<iostream>
using namespace std;

// case 1:
// int main()
// {

// //   // I can print the value of x but cant modify the value of x.

//   const int x = 10;
  
//   cout << x;

// }

// case 2:
// So in this case i'm able to increment the value of x.
// If we use constant before (int x = 10) then the value i.e const value cant be modified.

// int main()
// {
//   int x = 10;
//   int const *ptr = &x;                           // So its a pointer to a constant integer. i.e. pointer is pointer is pointing to a location.
//   int y = 20;
//    ptr = &y;                                    // Pointer is pointing on y now first it was on x.
//   //   If i was assigining ++*ptr then it shows error see...
//   ++*ptr;                                        // cant be modified it shows error.



//   // const int x = 10;                           // x is also a constant 

//     // const int *ptr = &x;                      // Pointer is also a constant. // can't modify the value of that identifier. 

    

//     // ++*ptr; ?                                  // thats why we have error in this place.

//     cout << *ptr << " " << x << endl;

// }

// case 3:
// int main()
// {
//   int x = 10;

//   const int * const ptr = &x;                       //Pointer constant to a integer constant. // So i cannot modify the data even it cannot move the pointer to any other variable.

//   ++*ptr;

//   int y = 20;

//   ptr = &y;

//   cout << *ptr << " " << x << endl;


// }

// case 4:

// class Demo 
// {
//   public:
//     int x = 10;
//     int y = 20;

// // If we add const after void Display() i.e(void Display() const) then you cannot modify the members of a class when a function is declared as a constant...
//     void Display() const
//     {
//       x++;
//       cout << x << " " << y << endl;
//     }
// };
// int main()
// {

//   Demo d;
//   d.Display();
  

// }

// case 5:

// If we want to call by reference
// See all reference functions are converted into inline functions.
// So you can make the function inline as well as you cana make it act as a call the value.

// void fun(const int &a,int &b)
// {
//   cout << a << " " << b << endl;
//   a++;
// }
// int main()
// {
//   int x = 10;
//   int y = 20;

//   fun(x,y);
//   cout << " Main " << x << " " << y << endl;


// }


