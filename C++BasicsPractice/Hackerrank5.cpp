#include<iostream>
using namespace std;

int main()
{
  // int n;
  int a;
  int b;
  cin>>a>>b;
  for(int i=a;i<=b;i++)
  switch(i)
  {
    case 1:
    cout<<"One";
    break;

    case 2:
    cout<<"Two";
    break;

     case 3:
    cout<<"Three";
    break;

    case 4:
    cout<<"Four";
    break;

     case 5:
    cout<<"Five";
    break;

    case 6:
    cout<<"six";
    break;

     case 7:
    cout<<"Seven";
    break;

    case 8:
    cout<<"Eight";
    break;

    case 9:
    cout<<"Nine";
    break;

    default:
    if(i%2==0)
    {
      cout<<"Even"<<endl;
    }
    else
    {
      cout<<"Odd"<<endl;
    }
  }
}
  
    