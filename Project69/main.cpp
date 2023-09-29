#include<iostream>
using namespace std;

// EXAMPLE OF EXCEPTION HANDLING:(construct of exception handling.)
int main()
{
  int x = 10, y = 2, z;

  try
  {
    if(y == 0)
        throw 1;
    z = x/y;
    cout << z << endl;
  }

  catch(int e)
  {
    cout << " Division by zero " << e << endl;
  }

  cout << " BYE " << endl;                              // Bye is displayed always whether there is an exception or no exception.
  return 0;
}