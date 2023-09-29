// // #include<iostream>
// // using namespace std;
// // Preprocessor directives are commands to the compiler.


// // int main()
// // {
// //   cout << " Geeks " << endl;

// //   cout << " For " << endl; 

// //   cout << " Geeks " << endl;

// //   return 0;
// // }

// // #define PI 3.1425

// // #define PI 3.1425

// // #define max(x,y) (x>y?x:y)
// // #define msg(x) #x
// // #ifndef PI
// //     #define PI 3
// // #endif
// // int main()
// // {
// //   // cout << PI;
// //   // cout << max(10,12) << endl;
// //   // cout << endl;
// //   cout << msg(hello) << endl;

// //   cout << max(10,12);
  
// // }

// #include<iostream>
// #include<string>
// using namespace std;

// template<typename T>
// T min(Ta , Tb)
// {
//   return (a < b)? a : b;
// }

// template<typename T1, typename T2>
// void func(T1 a, T2 b)
// {
//   std::cout << a << " " << b << std::endl;
// }

// struct Person
// {
//   std::string name;
//   int age;
// };

// int main()
// {
//   Person p1{"Curly" , 50};
//   Person p2{"Moe " , 30};


// }


//   std::cout << min<int>(2,3) << std::endl;    // 2
//   std::cout << min(2,3) << std::endl;         // 2
//   std::cout << min('A', 'B') << std::endl;    // A
//   std::cout << min(12.5, 9.2) << std::endl;       // 9.2
//   std::cout << min(5 + 2*2, 7 + 40) << std::endl; // 9

// ==================================================================
// #include<iostream>
// #include<string>
// #include<vector>

// // Template classes are typically completed contained in header files
// // So, we would have the templates class in item.h and no item.cpp file
// // would be used

// template<typename T>
// class Item {
//   private:
//     std::string name;
//     T value;

//   public:
//     Item(std::string name, T value):name{name} , value{value}
//     {}
//     std::string get_name() const {return name;}
//     T get_value() const {return value;}
// };

// template <typename T1, typename T2>
// struct My_pair
// {
//   T1 first;
//   T2 second;
// };

// int main()
// {
//   Item<int> item1 {"Frank",100};
//   std::cout << item1.get_name() << " " << item1.get_value() << std::endl;

//   Item <std::string> item2{" Frank ", " Professor "};
//   std::cout << item2.get_name() << "" << item2.get_value() << std::endl;

//   Item <Item <std::string>> item3 {" Frank ", {" C++ "," Professor "}};
//   std::cout << item3.get_name() << " "
//             << item3.get_value().get_name() << " "
//             << item3.get_value().get_value() << std::endl;

//   // ====================================================================

//   std::cout << " \n =========================================================== " << std::endl;
//   std::vector<Item<double>> vec {};
//   vec.push_back(Item<double> ("Larry",100.0));
//   vec.push_back(Item<double>("Moe", 200.0));
//   vec.push_back(Item<double>("Curly",300.0));

//   for(const auto &item:vec)
//   {
//     // std::cout << item.get_name() << " " << item.get_value << std::endl;
//   }

// }


