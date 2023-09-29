#include <iostream>
using namespace std;

int main(){
  enum Direction {
    left,right,up,down
  };

  Direction heading {left};

  switch (heading){
    case left: cout << " Going Left ";
    break;

    case right: cout << " Going Left ";
    break;

    case up: cout << " Going Up ";
    break;

    case down: cout << " Going Down ";
    break;

    cout << endl;
    return 0;

    default: cout << " OK " << endl;
  }
}