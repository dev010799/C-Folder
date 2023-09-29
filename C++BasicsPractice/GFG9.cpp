#include<iostream>
using namespace std;

void  updateVar(int *a)
{
  *a = *a + 10;

}
int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int a;
    cin>>a;

    updateVar(&a);
    cout<<a;
  }

  return 0;

}