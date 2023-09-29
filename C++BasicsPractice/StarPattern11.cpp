#include<iostream>
using namespace std;

int main()
{
  int i,j;

  for(int i{1};i<=5;i++)    // rows
  {
    for(int j{1};j<=9;j++)  // columns
    {
      if(j<=6-i || j>=i+4)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }
    cout <<"\n";
  }
  return 0;
}