#include<iostream>
using namespace std;

// call by value / pass by value :
void swap(int x , int y)             // x and y are formal parameters.
{
  int temp;
  temp = x;
  x = y;
  y = temp;
  cout << x << " " << y << endl;
}

int main(){
 
int a = 10 , b = 20;              // a and b are actual parameters.
swap (a,b);
cout << a << " " << b << endl;

cout << endl;
return 0;

 

  
}