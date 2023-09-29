#include<iostream>
using namespace std;

// class Base
// {
  // public:
//   void fun1()
//   {
//     cout << " fun of base class " << endl;
//   }
// };

// class Derived : public Base
// {
//   void fun2()
//   {
//     cout << " fun of Derived class " << endl;
//   }
// };

// int main()
// {
//    Base  b;
//    Derived *ptr = &b;
//    ptr -> fun1();
//   //  ptr -> fun2();
//    cout << endl;
//    return 0;
// }

// Example 2 (Base class pointer and Derived class Object.):

// NOTE: Derived class inherits the features of base class and can access functions of Base class plus derived class.
// NOTE: But in base class it access only its own function and access it . It Doesn't access 


// class Rectangle
// {
//   public:
//        void area()
//     {
//     cout << " Area of rectangle ";
//     }
// };

// class Cuboid: public Rectangle
// {
//   public:
//       void volume()
//       {
//     cout << " Cuboid Volume " << endl;
//       }
// };

// int main()
// {
//   Cuboid c;
//   Rectangle *p = &c;
//   p -> area();
//   // c.volume();
// }

// Example 3 (Basic car vs new car features example):

// class BasicCar
// {
//   public:
//     void start()
//     {
//       cout << " Start the car " << endl;
//     }
// };

// class AdvanceCar : public BasicCar
// {
//   public:
//     void playMusic()
//     {
//       cout << " Play the music " << endl;
//     }
// };

// int main()
// {
//   // AdvanceCar a;
//   // BasicCar *ptr = &a;
//   // a.start();
//   // a.playMusic();
//   ptr -> start();
//   ptr -> playMusic();
// }

// Example code for Generalization:
// When we assign virtual function to " zero 0" then it is said to be pure virtual function.
// Those functions must be overriden by derived classes.
// When a class inherits from that one, thrn this also become abstract.If it is not overriding.
// So pure virtual functions must be overriden by derived classes.
class Car
{
  public:
  virtual void Start() = 0;
  // {
  //   cout << " Start the car " << endl;
  // }

  virtual void Stop() = 0;
  // {
  //   cout << " Stop  the car " << endl;
  // }
};

class Innova : public Car
{
  public:
  virtual void Start () = 0;
  // {
  //   cout << " Innova car is started " << endl;
  // }

  virtual void Stop () = 0;
  // {
  //   cout << " Innova car is stopped " << endl;
  // }
};

class Swift : public Car
{
  public:
  void Start()
  {
  cout << " Swift car is started " << endl;

  }

  void Stop()
  {
    cout << " Swift car is stopped " << endl;
  }
};

int main()
{
  Car *c = new Swift();
  // c -> Start();
  c -> Stop();
  // p -> Swift();
  
  return 0;
}
