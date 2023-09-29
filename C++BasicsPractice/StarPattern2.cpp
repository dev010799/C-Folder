#include<iostream>
using namespace std;

int main()
{
  int i,j;

  for(int i=1;i<=5;i++)
  {
    for(int j=1;j<=5;j++)
    {
      if(j<=6-i)
      {
        // suppose we want output of type 123 then delete "*" instead of that insert "j"
        cout << "*";
      }
      else
      {
        cout << "";
      }
     
    }
    cout << "\n";
  }
  return 0;
}