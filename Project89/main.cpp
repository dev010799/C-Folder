#include<iostream>
using namespace std;

// class Shallow{
//   private:
//     int *data;
//   public:
//     void set_data_value(int d)
//     {
//       *data = d;
//     }

//     int get_data_value()
//     {
//       return *data;
//     }
//     // Constructor..

//     Shallow::Shallow(const Shallow &source);
//     // Destructor

//     ~Shallow();
// };

// Shallow::Shallow(int d)
// {
//   data = new int;
//   *data = d;
// }

// Shallow::Shallow(const Shallow &source)

//   :data(source.data)
//   {
//     cout << " Copy constructor - shallow copy " << endl;
//   }

//   Shallow::~Shallow()
//   {
//     delete data;
//     cout << " Destructor freeing data " << endl;
//   }

//   void display_shallow(Shallow s)
//   {
//     cout << s.get_data_value() << endl;
//   }

//   int main()
//   {
//     Shallow obj1 {100};
//     display_shallow(obj1);

//     Shallow obj2{obj1};
//     obj2.set_data_value(1000);

//     return 0;


//   }
// =======================================================
// Static class Members:

// #include<iostream>
// using namespace std;

// class Box
// {
//  private:
//     double length;                // Length of a box..
//     double breadth;               // Breadth of a box..
//     double height;                // Height of a box..

//  public:
//     static int objectCount;

//     // constructor definition:
//     Box(double l = 2.0 , double b = 2.0 , double h = 2.0)
//     {
//       cout << " Constructor called . " << endl;
//       length = l;
//       breadth = b;
//       height = h;

//       // Increase every time object is created
//       objectCount++;
//     }

//     double Volume()
//     {
//       return length * breadth * height;
//     }

//     static int getCount()
//     {
//       return objectCount;
//     }

// };

// int Box::objectCount = 0;

// int main(void)
// {
//   // Print total number of objects before creating object.
//   cout << " Initial stage count: " << Box::getCount() << endl;

//   Box Box1(3.3 , 1.2 , 1.5);                           // Declare box1
//   Box Box2(8.5 , 6.0 , 2.0);                           // Declare box 2

//   // Print total number of objects after creating object.

//   cout << " Final stage count: " << Box::getCount() << endl;

//   return 0;
// }
// ===============================================================================

// Static class members
// #include<iostream>
// #include "Player.h"

// using namespace std;

// void display_active_players()
// {
//   cout << " Active players " << Player::get_num_players() << endl;
// }

// int main()
// {
//   display_active_players();
//   Player hero{" Hero "};
//   display_active_players();

//   {
//     Player frank{" Frank "};
//     display_active_players();
//   }

//   display_active_players();
//   return 0;

// }

// #include<iostream>
// using namespace std;

// int main()
// {
//   int i = 0;
//   while(i < 10)
//   {
//     cout << " Hello\n ";
//     i++;

//   }

//   return 0;
// }

// int main()
// {
//   int i = 0;
//   do
//   {
//      cout<< i << " Hello\n " << endl;
//      i++;
//   }while(i < 10);

//   return 0;
// }

//=================================================================

int main()
{
  for(int i = 0; i < 10; i++)
  {
    cout << i << " Hello\n " << endl;
    i++;
  }
  return 0;
}
