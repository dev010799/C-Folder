#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//  int i,j;
//  for(int i=1;i<=5;i++)
//  {
//   int k=1;
//   for(int j=1;j<=5;j++)
//   {
//     if(j<=i)
//     {
//       cout<<"k" <<" ";
//       k=k*(i-j)/j;
//     }
//     else
//     {
//       cout<<" ";
//     }
//   }
//  }
// }
// ===========================================
// Pascals Triangle code:
int main()
{
 int i,j;
 for(int i=1;i<=5;i++)
 {
  int k=1;
  for(int j=1;j<=5;j++)
  {
    if(j<=i)
    {
      cout<<"k" <<" ";
      k=k*(i-j)/j;
    }
    else
    {
      cout<<" ";
    }
  }
 }
}
