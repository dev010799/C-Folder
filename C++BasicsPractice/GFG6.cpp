#include<iostream>
using namespace std;
// We can use comment to skip the codde in output.
// comments are of type Multiline and single line.
int  comment(int a,int b,int c)
{
  cout<<a<<endl;
  // cout<<b<<endl;
  cout<<c<<endl;

}
int main()
{
  int t;
  cin>>t;

  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;

    int result = comment(a,b,c);
    cout<<result;
  }

  return 0;

}