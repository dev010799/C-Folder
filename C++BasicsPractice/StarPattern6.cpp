#include<iostream>
using namespace std;

int main()
{
  int i,j;

  for(int i=1;i<=5;i++)
  {
    for(int i=1;i<=9;i++)
    {
      if(j>=i && j<=10-i)
      {
        cout << "$";
      }
      else
      {
        cout << " ";
      }
      cout << "\n";
    }
  }
  return 0;
}