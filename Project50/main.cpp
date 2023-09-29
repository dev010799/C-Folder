#include<iostream>
using namespace std;

class Test
{
  public:
    void func1()           //This is inline function because they expand in same line where they are called they explained in same line..
    {
      cout << " Inline ";   //SO There is no separate block for that function
    }

    inline void func2();           // I will write inline inside infront of this function
    
};

void Test :: func2()
{
  cout << " Non-Inline ";
}

int main()
{
  Test t;
  t.func1();
  t.func2();
}

//  Meaning of Inline functions:
// Their machine code will be pasted or copied at the place or function call. this are inline function.

// Concept behind inline:
// If you define a function inside a class automatically it is an inline then second thing.
// If you write a function outside the class then automatically non-inline function.

