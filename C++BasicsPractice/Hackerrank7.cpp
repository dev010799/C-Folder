#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//   string s1="abcd";
//   string s2="ef";

//   int length1 =  s1.size();
//   cout<<length1<<endl;
//   int length2 = s2.size();
//   cout<<length2<<endl;

//   // concatenate 2 strings:
//   string s= s1+s2;
//   cout<<s<<endl;

//   //Accessing ith element:
//   char c0=s[0];
//   char c1=s1[1];
//   char c2=s2[2];

//   s[0] = 'z';

// }
// =====================================================
int main()
{
  string a,b;
  cin>>a>>b;
  cout<<a.size()<<" " <<b.size()<<endl;

  //Concatenation:
  cout<<a+b<<endl;
  char t;
  t=a[0];
  a[0]=b[0];
  b[0]=t;
  cout<<a<<" "<<b;

  return 0;
}