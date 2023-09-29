#include<iostream>
using namespace std;

// program for:
// if we enter digit then it shows an String of a number using if else.
// int main()
// {
//   int n;
//   cin>>n;

//   if(n==1)
//   {
//     cout<<"One"<<endl;
//   }
//   else if(n==2)
//   {
//     cout<<"Two"<<endl;
//   }
//   else if(n==3)
//   {
//     cout<<"Three"<<endl;
//   }
//   else if(n=4)
//   {
//     cout<<"Four"<<endl;
//   }
//   else if(n==5)
//   {
//     cout<<"Five"<<endl;
//   }
//   else if(n==6)
//   {
//     cout<<"Six"<<endl;
//   }
//   else if(n==7)
//   {
//     cout<<"Seven"<<endl;
//   }
//   else if(n==8)
//   {
//     cout<<"Eight"<<endl;
//   }
//   else if(n==9)
//   {
//     cout<<"Nine"<<endl;
//   }
//   else if(n==10)
//   {
//     cout<<"Ten"<<endl;
//   }
//   else
//   {
//     cout<<"Greater than 10"<<endl;
//   }

//   return 0;
// }

// ============================================
//Using Switch Case:
int main()
{
  int n;
  cout<<"Enter a number:";
  cin>>n;

  switch(n)
  {
    case 1:
    cout<<"One"<<endl;
    break;

    case 2:
    cout<<"Two"<<endl;
    break;

    case 3:
    cout<<"Three"<<endl;
    break;

    case 4:
    cout<<"Four"<<endl;
    break;

    case 5:
    cout<<"Five"<<endl;
    break;

    case 6:
    cout<<"Six"<<endl;
    break;

    case 7:
    cout<<"Seven"<<endl;
    break;

    case 8:
    cout<<"Eight"<<endl;
    break;

    case 9:
    cout<<"Nine"<<endl;
    break;

    case 10:
    cout<<"Ten"<<endl;
    break;

    default:
    cout<<"Number is greater than 10"<<endl;

  }
}