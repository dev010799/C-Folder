#include<iostream>
using namespace std;

int main()
{
  int n1=0,n2=1,n3;
  cout << n1 << n2 << endl;

  for(int i=0;i<=10;i++)
  {
    n1 = n2;
    n2 = n3;
    n3 = n1 + n2;
  }

  return 0;


}