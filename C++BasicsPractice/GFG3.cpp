#include<iostream>
using namespace std;

// Using objects and class:
// class Solution{
//   public:
//   int Addition(int a,int b)
//   {
//     return a + b;
//   }
// };

// int main()
// {
//   int t;
//   cin>>t;
//   while(t--)
//   {
//     int a,b;
//     cin>>a>>b;
//     Solution obj;
//     cout<<obj.Addition(a,b)<<endl;
//   }
//   return 0;
// }
// ==============================================================

int addition(int a,int b)
{
  return a+b;
}

int main()
{
  int a;
  int b;
  int sum;

  cout<<"Enter an integers: "<<endl;
  sum = addition(10,20);
  cout<<sum<<endl;


}