#include<iostream>
using namespace std;

class Solution
{
  public:
  int cppIntType()
  {
    int x;
    cin>>x;
    return x;

  }

  char cppCharType()
  {
    char y;
    cin>>y;
    return y;

  }

  float cppFloatType()
  {
    float z;
    cin>>z;
    return z;

  }
};

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    Solution ob;
    cout<<ob.cppInttype()<<endl;
    cout<<ob.cppCharType()<<endl;
    cout<<ob.cppFloatType()<<endl;
  }

}