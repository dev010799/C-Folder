#include<iostream>
#include<math.h>
using namespace std;

// code for check perfect square.

int main()
{
  int n;
  cout << "Enter a number " << endl;
  cin >> n;

  int s=sqrt(n);
  if(s*s == n)
  {
    cout << "Number is a perfect square" << endl;
  }
  else
  {
    cout << "Number is not a perfect square " << endl;
  }


}