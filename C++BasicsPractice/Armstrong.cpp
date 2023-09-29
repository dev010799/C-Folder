#include<iostream>
using namespace std;

// int main()
// {
//   int n,r,t,sum=0;

//   cout << "Enter a number:" << endl;
//   cin >> n;
  
//   t = n;
//   while(n!=0)
//   {
//     r = n%10;
//     sum = sum + r*r*r;
//     n = n/10;
//   }

//   if(t==n)
//   {
//     cout << "Armstrong number" << endl;
//   }
//   else{
//     cout << "Not a Armstrong number" << endl;
//   }

//   return 0;


  


// }

int main()
{
  int n,r,t,sum=0;
  cout << "Enter an integer" << endl;
  cin >> n;

  t = n;
  while(n!=0)
  {
    r = n%10;
    sum = sum + r*r*r;
    n = n/10;
  }

  if(t==sum)
  {
    cout << "Number is an Armstrong number"<<endl;
  }
  else
  {
    cout << "Number is not an Armstrong number" << endl;
  }
  return 0;
}