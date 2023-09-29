#include<iostream>
using namespace std;

int main()
{
  int n;
  int i,j;
  int count=0;
  cout<<"Enter a number "<<endl;
  cin>>n;
  for(int i=1; i<n; i++)  // i n takk iterate karvayega lekin "n" include nahi karega.
  {
     for(int j=2; j<i; j++) // "j" i k value ko iterate karvayega(and dekhega ki konsa aisa value hai jo ki prime number hai)
     {
      if(i%j==0)
      {
        break;
      }

     }
     if(j==i)
     {
      if(n%i==0)
      {
        cout<<i<<endl;
        count++;
      }

     }

  }
  if(count==0)
  {
    cout<<"Not Found any prime factors";
  }
}