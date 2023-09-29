#include<iostream>
using namespace std;
// using Normal code

// int main()
// {
//   int n;
//   cout<<"Enter integers: ";
//   cin>>n;

//   if(n>5)
//   {
//     cout<<"Greater than 5"<<endl;
//   }
//   else if(n<5)
//   {
//     cout<<"Less than 5"<<endl;
//   }
//   else
//   {
//     cout<<"Equal to 5"<<endl;
//   }
  
//   return 0;
// }

// ====================================================
// Using object oriented Programming:
class Solution
{
  public:
  string compareFive(int n)
  {
    if(n<5)
    {
      cout<<"Less than 5"<<endl;
    }
    else if(n>5)
    {
      cout<<"Greater than 5"<<endl;
    }
    else
    {
      cout<<"Equal to 5"<<endl;
    }
  }
};

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int n;
    cin>>n;

    Solution ob;
    ob.compareFive(n);
  }
}

