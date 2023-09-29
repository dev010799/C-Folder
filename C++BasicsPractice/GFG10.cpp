#include<iostream>
using namespace std;

void inputData()
{
  int a;
  string b;
  cin>>a>>b;
  cout<<a<<b<<endl;
}

int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    inputData();
  }
  return 0;
}