#include<iostream>
using namespace std;
// *****
// *****
// *****
// *****
// *****
// Square Pattern
int main()
{
  int i,j;
  for(int i=1;i<=5;i++)
  {
    for(int j=1;j<=5;j++)
    {
      if(j<=i || j>=i)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout << "\n";
  }

}