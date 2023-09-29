#include<bits/stdc++.h>
using namespace std;

// Normal swapping....using Third variable.
// int main()
// {
//   int a = 10;
//   int b = 20;
//   int c;
//   c=a;
//   a=b;
//   b=c;

//   cout << " Swapping values is " << a << " " << b;

//   return 0;
// }
// ==========================================================

// Without using 3rd variable....

int main()
{
  int a=20,b=10,c;

  a = a+b;        // i.e. a = 20 + 10 = 30 i.e a=30
  b = a-b;       // i.e. b = 20 - 10 = 10 i.e b=10
  a = a-b;      // i.e.  a = 30 - 10 = 10 i.e a = 20

  cout << " Swapping values is: " << a << " " << b;
}