#include <iostream>
using namespace std;

int main(){
  // int i {0};

  // for (i = 1; i <= 5; ++i){
  //   cout << i << endl;
  // }

  // cout << endl;
  // return 0;

  int scores [] {100,90,87};

  for (int i{0} ; i < 3; ++i){
    cout << scores[i] << endl;
  }
  for (int i{0}; i <= 2; ++i){
    cout << scores[i] << endl;
  }

  cout << endl;
  return 0;
}