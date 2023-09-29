#include<iostream>
using namespace std;
// =================================
// Code for print pattern
// =================================
int main()
{
  int i,j;

  for(int i{1};i<=5;i++)
  {
    for(int j{1};j<=5;j++)
    {
      if(j>=6-i)
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

// ===========================================================
// code for print numbers.
// Do small change in code like insert "j" instead of "*".
// ===========================================================
// int main()
// {
//   int i,j;

//   for(int i{1};i<=5;i++)
//   {
//     for(int j{1};j<=5;j++)
//     {
//       if(j>=6-i)
//       {
//         cout << j;
//       }
//       else
//       {
//         cout << " ";
//       }
//     }
//     cout << "\n";
//   }
//   return 0;
// }