#include<iostream>
using namespace std;

int main()
{
  int i,n;
  cout << "Enter a number" << endl;
  cin >> n;
  for(int i=2;i<n;i++)
  {
    if(n%i == 0)
    {
     cout << " Number is not a prime " << endl;
     break;

    }
    if(i == n)
    {
      cout << " Number is prime " << endl;
    }
  }
}