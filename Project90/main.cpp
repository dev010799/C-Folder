// #include<iostream>
// using namespace std;

// class Complex
// {
//   int a,b;

//   public:
//     void setNumber(int n1, int n2)
//     {
//       a = n1;
//       b = n2;
//     }

//     friend Complex sumComplex(Complex o1 , Complex o2);

//     void printNumber()
//     {
//       cout << " Your number is " << a << " + " <<  b  << "i" << endl; 
//     }

// };



// Complex sumComplex(Complex o1, Complex o2)
// {
//   Complex o3;
//   o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
//   return o3;
// }

// int main()
// {

//   Complex c1,c2,sum;
//   c1.setNumber(2,6);
//   c2.setNumber(3,7);
//   c1.printNumber();
//   c2.printNumber();

//   return 0;
// }

// int main()
// {
//   int  a[]  = {2,4,6,8,10};
//   // cout << a[0] << endl;
//   // cout << a[1] << endl;
//   // cout << a[2] << endl;
//   // cout << a[3] << endl;
//   // cout << a[4] << endl;

//   // using for loop:

//   for (int i = 0; i < 5; i++)
//   cout << a[i] << endl;
// }

// for each loop

// int main()
// {
//   int A[6] = {2,4,6};

//   for (int x:A)
//       cout << x << endl;
  
//   return 0;
// }

// int main()
// {
//   char A[] = {'A','B','C',66,88};

//   for (auto x:A)
//       cout << x << endl;

//   return 0;
// }

// int main()
// {

//   float A[6] = {2.f,7.8f,9,8,7};

//   for(auto x:A)
//       cout << x << endl;
  
//   return 0;

// }

// #include<iostream>
// using namespace std;

// class Rectangle
// {
//   public:
//       int length;
//       int breadth;
//       int Area()
//       {
//         return length * breadth;
//       }

//       int Perimeter()
//       {
//         return 2 * (length + breadth);
//       }
// };

// class Cuboid:public Rectangle
// {
//   public:
//       int height;
//       Cuboid(int l, int b, int h)
//       {
//         length = l;
//         breadth = b;
//         height = h;
//       }

//       int Volume()
//       {
//         return length * breadth * height;
//       }
// };

// int main()
// {
//   Cuboid c (2,4,6);
//   cout << " Volume is " << c.Volume() << endl;
//   cout << " Area is " << c.Area() << endl;
//   cout << " Perimeter is " << c.Perimeter() << endl;

// }

// #include<iostream>
// using namespace std;

// template<typename T> T myMax(Tx , Ty)
// {
//   return (x > y) ? x : y;
// } 

// int main()
// {
//   cout << myMax<int>(3,7) << endl;
//   cout << myMax<int>(3.0,8.0) << endl;
//   cout << myMax<char>('g','h') << endl;

//   return 0;
// }


// #include<iostream>
// using namespace std;

// class Base
// {
//   public:
//       void display()
//       {
//         cout << " Display of base " << endl;
//       }

// };

// class Derived : public Base
// {

//   public:
//       void display()
//       {
//         cout << " Display of Derived " << endl;
//       }
  

// };

// int main()
// {
//   Derived d;
//   d.display();

//   Base b;
//   b.display();
// }



// class BasicCar
// {
//   public:
//     virtual void start()
//     {
//       cout << " BasicCar Started " << endl;
//     }
// };

// class AdvanceCar: public BasicCar
// {
//   public:
//       void start()
//       {
//         cout << " AdvanceCar Started " << endl;
//       }

// };

// int main()
// {
//   BasicCar *p = new AdvanceCar();                      // Base class pointer pointed towards an derived class object..
//   p->start();                                          // Overrided function is called..
// }

// class Car
// {
//   public:
//     virtual void start()
//     {
//       cout << " Car started ";
//     }

//     virtual void stop()
//     {
//       cout << " Car stopped ";
//     }
// };

// class Innova: public Car
// {
//   public:
//    virtual void start()
//     {
//       " Innova started ";
//     }

//     virtual void stop()
//     {
//       " Innova stopped ";
//     }
// };

// class Toyota: public Car
// {

//   virtual void start()
//   {
//     " Toyota is started ";
//   }

//   virtual void stop()
//   {
//     " Toyota is stopped ";
//   }

// };

// int main()
// {
//   // Car c;
//   // c.start();

//   Car *C = new Innova();
//   C -> start();




// }

// template<typename T>
// void my_swap(T &a , T &b)
// {
//   T temp = a;
//   a = b;
//   b = temp;
// }

// int main()
// {
//   int x{100};
//   int y{200};

//    std::cout << x << "," << y << std::endl;
//   my_swap(x,y);
//   std::cout << x << " , " << y << std::endl;

// }

// Generic Programming with class Templates:
// #include<iostream>
// #include<vector>
// template<typename T>
// class Item {
//   private:
//       std::string name;
//       T value;
//   public:
//       Item(std::string name, T value)
//           :name{name}, value{value}
//           {}
//       std::string get_name() const{return name;}
//       T get_value() const {return value;}

// };

// int main()
// {
//   Item<int> item1 {"Larry",1};
//   Item<double> item2{"House", 1000.0};
//   Item<std::string> item3 {"Frank", "Boss"};
//   std::vector<Item<int>> vec;
// }

// ==============================================================================

#include<iostream>
#include<string>
#include<vector>

template<typename T>
class Item
{
  private:
    std::string name;
    T value;
  public:
    Item(std::string name, T value): name{name}, value{value}
    {}
    std::string get_name() const{return name;}
    T get_value() const {return value;}

};

template <typename T1, typename T2>
struct My_Pair
{
  T1 first;
  T2 second;
};

int main()
{
  Item<int> item1 {" Frank ",100};
  std::cout << item1.get_name() << " " << item1.get_value() << std::endl;

  Item<std::string> item2 {" Frank ", " Professor "};
  std::cout << item2.get_name() << " " << item2.get_value() << std::endl;

  Item <Item<std::string>> item3 {" Frank ",{" C++ "," Professor "}};
  std::cout << item3.get_name() << ""
            << item3.get_value().get_name() << ""
            << item3.get_value().get_value() << std::endl;

  // =====================================================================
  // Taking some Items and creating some vector Items:
//   std::cout << " \n======================================================== " << std::endl;
//   std::vector<Item<double>> vec{};
//   vec.push_back(Item<double>(" Larry ", 100.0));
//   vec.push_back(Item<double>(" Moe ",200.0));
//   vec.push_back(Item<double>("Curly", 300.0));

//   for(const auto &item:vec)
//   {
//     std::cout << item.get_name() << " " << item.get_value() <<  std::endl;
//   }

//   // =====================================================================
//   std::cout << " \n ============================================= " << std::endl;
//      My_Pair <std::string,int> p1{" Frank ",100};
//      My_Pair <int , double> p2{124, 12.7};

//      std::cout << p1.first << ", " << p1.second << std::endl;
//      std::cout << p2.second << " , " << p2.second << std::endl; 


//      return 0;

// }

// ===================================================================================================
// ===================================================================================================
// Note: Since C++ 11 the STL has std::array which is a template-based array class
// Use std::array instead of raw arrays whenever possible

// Note that we can have non-type template parameters..
// Thats what N is in this case..

// #include<iostream>
// #include<string>

// template<typename T,int N>
// class Array
// {
//   int size{N};                  // How do we get the N???
//   T values[N];                // The N needs to ne known at compile-time!

//   friend std::ostream &operator << (std::ostream &os, const Array<T,N> &arr)
//   {
//     os << "[";
//     for (const auto &val: arr.values)
//         os << val << " ";
//     os << "]" << std::endl;
//     return os;


   
//   }

//   public:
//       Array() = default;
//       Array(T init_val)
//       {
//         for(auto &item:values)
//         item = init_val;
//       }

//       void fill(T val)
//       {
//         for (auto &item: values)
//         item = val;
//       }

//       int get_size() const
//       {
//         return size;
//       }

//       // Overloaded subscript operator for easy use
//       T &operator[](int index)
//       {
//         return values[index];
//       }
// };

// int main()
// {
//   Array<int,5> nums;
//   std::cout << " The size of nums is: " << nums.get_size() << std::endl;
//   std::cout << nums << std::endl;

//   nums.fill(0);
//   std::cout << " The size of num is: " << nums.get_size() << std::endl;

//   nums.fill(10);
//   std::cout << " The size of nums is: " << nums.get_size() << std::endl;
//   std::cout << nums << std::endl;

//   nums.fill(10);
//   std::cout << nums << std::endl;

//   nums[0] = 1000;
//   nums[3] = 2000;
//   std::cout << nums << std::endl;

//   Array<int,100> nums2 {1};
//   std::cout << " The size of nums2 is: " << nums2.get_size() << std::endl;

//   Array<std::string,10> strings(std::string{" Frank "});
//   std::cout << " The Size of nums2 is: " << nums2.get_size() << std::endl;
//   std::cout << strings << std::endl;

//   strings[0] = std::string{" Larry "};
//   std::cout << strings << std::endl;

//   strings.fill(std::string{});
//   std:: cout << strings << std::endl;

//   return 0;

  

// }



