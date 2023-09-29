#include<iostream>
using namespace std;

int main()
{
  int n,r,t,sum=0;

  cout << "Enter an integer";
  cin >> n;

  t=n;
  

  while(n != 0)
  {
    r = n%10;
    sum = sum*10 + r;
    n = n/10;
  }

  if(t == n)
  {
    cout << " It is an palindrome number " << endl;
  }

  else
  {
    cout << " Not an Palindrome number " << endl;
  }
  return 0;
}