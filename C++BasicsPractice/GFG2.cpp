#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//   int a;
//   int b;
//   int c = 0;
//   cout<<"Enter two integers: "<<endl;
//   cin>>a>>b;

//   c = a*b;

//   cout<<c<<endl;
// }

// =====================================================
// using class and object 

class Solution
{
  public:
  
  int Multiplication(int a,int b){
    return a*b;
  }
};

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int a,b;
    cin>>a>>b;
    Solution ob;
    cout<<ob.Multiplication(a,b)<<endl;
  }
}