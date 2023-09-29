#include<iostream>
using namespace std;

int main()
{
  int n,i,k;

  cout << " Enter an integer ";
  cin >> n;

  for(int i=2; i<n; i++)
  {
    for(int k=2; k<i; k++)
    {
      if(i%k == 0)
      {
        cout << " ";
        break;
      }

      if(k==i)
      {
        cout << k;
      }


    }
  }
  return 0;
}