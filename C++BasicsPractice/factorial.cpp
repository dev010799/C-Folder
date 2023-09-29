#include<iostream>
using namespace std;

int main()
{
  int n,i,f;
  cout << "Enter a number" << endl;
  cin >> n;
  f=n;
  for(int i=1;i<n;i++)
  {
    f = f * i;
    cout << f;
  }
  cout << " Factorial value is : " << f;



}