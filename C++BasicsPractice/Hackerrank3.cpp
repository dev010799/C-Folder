#include<bits/stdc++.h>
using namespace std;

// int max_of_four(int a,int b,int c,int d)
// {
//  if(a>b)
//  {
//   return a;
//  }
//  else if(b>c)
//  {
//   return b;
//  }
//  else if(c>d)
//  {
//   return c;
//  }
//  else
//  {
//   return d;
//  }


// }

// int main()
// {
//   int result = max_of_four(10,20,30,40);
//   cout<<result;
//   return 0;
// }
// ==============================================================

// How to access the global variable in c++;
// Using scope resolution operator
// int x=10;
// int main()
// {
//   int x=2;
//   cout << "Global Variable x"<<::x;
//   cout << "Local Variable x" <<x;                
  

// }
// ==================================================================
// Using & AND operator and if else:
int max_of_four(int a,int b,int c,int d)
{
  if(a>b && a>c && a>d)
  {
    return a;
  }
  else if(b>a && b>c && b>d)
  {
    return b;
  }
  else if(c>a && c>b && c>d)
  {
    return c;
  }
  else
  {
    return d;
  }
}
int main()
{
  int result = max_of_four(10,20,30,40);
  cout<<result;
  return 0;

}