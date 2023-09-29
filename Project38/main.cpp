#include<iostream>
#include<string>
#include<vector>
using namespace std;

using namespace std;

// I have 4 function prototypes here as follows:
void pass_by_value1(int num);                  /*Prototype 1*/
void pass_by_value2(string s);                 /*Prototype 2*/
void pass_by_value3(vector<string>v);         /*Prototype 3*/
void print_vector(vector<string>v);           /*Prototype 4*/ 

void pass_by_value1(int num){

  // In (int num) "num" is an formal parameter.
  num = 1000;
}

int main(){

  int num {10};
  // int another_num{20};

  cout << " num before pass_by_value1: " << num << endl;
  pass_by_value1(num);
  cout << " num after pass_by_value2: " << num << endl;




}