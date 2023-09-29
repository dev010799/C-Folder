#include<iostream>
using namespace std;


int main()
{
  int i,j;

  for(int i{1};i<=5;i++)     // Row loop
  {
    for(int j{1};j<=9;j++)  // Column loop
    {
      if(j>=6-i && j<=4+i)
      {
        cout << "#";
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