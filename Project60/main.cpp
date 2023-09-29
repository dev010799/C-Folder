#include<iostream>
using namespace std;

// Friend function syntax
// ======================================================================================================
// friend return_type function_name (arguments);    // for a global function
            // or
// friend return_type class_name::function_name (arguments);    // for a member function of another class
// =======================================================================================================

class base 
{
  private:
    int private_variable;

  protected:
    int protected_variable;

  public:
    base()
    {
      private_variable = 10;
      protected_variable = 20;
    }

    friend void friendFunction(base &obj);

};

void friendFunction(base &obj)
{
  cout << " Private variable: " << obj.private_variable << endl;
  cout << " Protected variable: " << obj.protected_variable << endl;
}

// driver code

int main()
{
  base object1;
  friendFunction(object1);

  return 0;
}

