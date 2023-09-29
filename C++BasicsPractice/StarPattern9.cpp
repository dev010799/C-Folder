#include<iostream>
using namespace std;

int main()
{
  int i,j;

  for(int i{1};i<=9;i++)   // Row
  {
    for(int j{1};j<=5;j++) // column
    {
      if(j>=6-i && j>=i-4)
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

  return 0;
}