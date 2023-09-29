#include<iostream>
using namespace std;

// template<class T>

// T maxim(T a, T b)
// {
//   if (a > b)
//   return a;
//   else
//   return b;
// }

// int main (){
//   cout << maxim(2,9);
//   cout << maxim(2.8,9.0);
//   cout << maxim(2.3f,6.7f);

// int add(int x, int y)
// {
//   return x + y;
// }

// int add(int x , int y , int z)
// {
//   return x + y + z;
// }


//  Default arguments for finding sum of two integers:

#include<iostream>
using namespace std;

// In this case single function works as 2 different functions:
// Benefit of Default arguments: Is we can defined overloaded functions by writing a single function.


// int sum(int a , int b , int c)
// int sum(int a , int b , int c = 0 )      /* int c = 0 is optional and this type of argument is called as default argument */
// {
//   return a + b + c;
// }
// int main()
// {
//   cout << sum(10,5);
//   cout << sum(12,13,14);
//   return 0;
// }

// write one function for finding maximum of three numbers, let us see int matrix Int max integer A integer:
// If you want to fill the default arguments to the parameters you should fill them from right <------------(in this manner)

// int max ( int a, int b, int c = 0)            // This is for my understanding dont write twice...
int max ( int  a = 0, int b = 0 , int c = 0)            // Default argument comes in picture ...
{
  return a > b && a > c ? a : (b > c ? b : c);                                         /* Using ternary operator */

  // if (a > b)
  // return a;
  // else if (b > c)
  // return b;
  // else
  // return c;

}

int main (){
  
  cout << max() << endl;                                            // 0 argument
  cout << max(10) << endl;                                          // 1 argument
  cout << max(10,20) << endl;                                       // 2 argument // Working for this condition also Here comes the default argument in picture .
  cout << max(10,20,30) << endl;                                    // 3 argument
  // cout << max(10,20,30) << endl;

  // o/p  of the above code is :
  // 0
  // 10
  // 20
  // 30
  return 0;

}


 
