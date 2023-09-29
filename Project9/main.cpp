#include <iostream>
using namespace std;

int main(){

  int num1 {10};
  int num2 {20};

  // int result {0};

  // result = num1 + num2;                                                         /*either we can use this method i.e. line 11 and 12  or line 14 this method to print.*/ 
  // cout << num1 << " + " << num2  << " = " << result << endl;

  cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  

  cout << num2 << " - " << num1 << " = " << num2 - num1 << endl;

  cout << num1 << " * " << num1 << " = " << num1 * num2 << endl;

  cout << num1 << " / " << num1 << " = " << num1 / num2 << endl;

  cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

  cout << num2 << " % " << num1 << " = " << num2 % num1 << endl;

  // cout << num1 << " < " << num2 << " = " << num1 < num2 << endl;

  cout << 10/20 << endl;

  cout << 10.0/20.0 << endl;

  cout << endl;

  return 0;
 
}