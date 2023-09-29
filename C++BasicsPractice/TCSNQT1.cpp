#include<iostream>
using namespace std;

// Question:
// Consider the following series:
// Remember index value start from 0:
// 1,1,2,3,4,9,8,27,16,81,32,243,64,729,128,2187...
// Find the nth term.
// for e.g if N=16, output -> 2187
// for e.g if N=5, output -> 4

// Logic:
// Odd number k position me even number ka power bann raha hai.
// series dekhke lag raha hai ki ek 2ka power bann raha hai or ek 3ka power bann raha hai.

int main()
{
  int n;
  cin>>n;

  if(n%2==1)
  {
    int term = (n+1)/2;
  }
  else
  {
    int term = n/2;
  }

}