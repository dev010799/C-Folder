#include<iostream>
using namespace std;
//Pyramid pattern:
int main()
{
  int i,j,k;

  for(int i=0;i<=5;i++)
  {
    k=1;
    for(int j=0;j<=9;j++)
    {
      if(j>=6-i && j<=4+i && k==1)
      {
        cout << "*";
        k=0;
      }
      else
      {
        cout << " ";
        k=1;
      }
    }
    cout << "\n";
  }

}

// pattern for print 1:

// int main()
// {
//   int i,j,k;

//   for(int i=0;i<=5;i++)
//   {
//     k=1;
//     for(int j=0;j<=9;j++)
//     {
//       if(j>=6-i && j<=4+i && k==1)
//       {
//         cout << "1";
//         k=0;
//       }
//       else
//       {
//         cout << " ";
//         k=1;
//       }
//     }
//     cout << "\n";
//   }

// }