#include<iostream>
#include<string.h>
using namespace std;

//Normal Method for string reverse.
// int main()
// {
//   char str[] = "Hello World";
//   cout<<strrev(str);
// }
// =====================================

//Iteration Method for string reverse.
int main()
{
  char str[] = {"Hello World"};
  int length = strlen(str);
  for(int i=length-1;i>=0;i--)
  {
    cout<<str[i];
  }
}