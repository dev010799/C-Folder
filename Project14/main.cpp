#include <iostream>
using namespace std;

int main (){

  
  int num1{10};
  int num2{20};

  cout << " Enter an number for comparison: " << endl;
  cout << " Enter two integers: " << endl;
  cin >> num1 >> num2;

  cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
  cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;

}