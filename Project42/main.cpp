#include<iostream>
using namespace std;

int g = 5;                               // GLobal variable. This should be accessible everywhere...
// This g will be accessible in function fun().
// As well as in function main().
 
void fun(){

// Local variables is only accessible in this function only i.e. fun(). 

int a{10};                             // Local variable. i.e. This is accessible only here...
a++;
g++;
cout << a << " " << g <<  endl;        // g is accessible in this fun() also...
// cout << a << endl;

}

int main(){

  cout << g << endl;

// cout << a << endl;
 

}