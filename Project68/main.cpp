#include<iostream>
using namespace std;

class Test
{

  
  public:                                   // class is having 2 data members.
    int a;
    static int count;                       // static data members are common data members for all the classes.and this is not initialized to anything.

  Test()
  {
    a = 10;
    count++;
  }

  static int getCount()
  {
    a++;
    return count;
  }


   
};

int Test::count = 0;                              // This is a global variable.

int main()
{
  Test t1,t2;
  cout << t1.count << endl;
  cout << t2.count << endl;

  t1.count = 25;
  cout << t2.count << endl;
  cout << Test::count << endl;

}

// So it means there is a single count variable which can be accessed using objects also using class name.
// So these are static data members.