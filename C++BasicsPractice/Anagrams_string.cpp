#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
// Anagrams string 
// What is Anagrams?
// equal number of characters(with different order).
// one string can be formed from another.
// e.g: pale=leap,slot=lots,hare=hear,angel=angle

int main()
{
  string s1="Hello World";
  string s2="World Hello";
  int length1=s1.length();
  int length2=s2.length();
  
  if(length1==length2)
  {
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
      cout<<"Both are in Anagrams";
    }
    else
    {
      cout<<"Both are not in Anagrams";
    }
  }
}