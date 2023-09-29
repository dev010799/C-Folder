// Constructors:

// Constructor Delegation:

// #include<iostream>
// using namespace std;

// class MyClass
// {
//   int a,b,c;

//   public:
//   MyClass(){
//     a = b = c = 0;

//   }

//   MyClass(int c){
//     // Initializing a and b are redundent, only c initialization is needed here...
//     a = 0;
//     b = 0;
//     this -> c = c;
//   }

//   void display()
//   {
//     cout << " a : " << a << " b: " << b << " c: " << c << endl;
//   }
// };

// int main()
// {
//   MyClass my_obj(5);
//   my_obj.display();
// }

// Example 2:

// #include<iostream>
// using namespace std;

// class MyClass
// {
//   private:
//      int a,b,c;

//   public:
//     MyClass()
//     {
//       a = b = c = 0;
//     }

//     MyClass(int c):MyClass()
//     {
//       // Using Constructor Delegation:

//       this -> c = c;

//     }

//     void display()
//     {
//       cout << " a: " << a << " b: " << b << " c: " << c; 
//     }

// };

// int main()
// {
//  MyClass my_obj(7);
//  my_obj.display();

// }

// ====================================================================================

// #include<iostream>
// using namespace std;

// class A
// {
//   private:
//     int num1, num2;
  
//   public:
//     A()
//     {
//       num1 = 5;
//       num2 = 7;
      
//     }

//     void display()
//     {
//       cout << num1 << " and " << num2 << endl;
//     }

// };

// int main()
// {

//   A obj;
//   obj.display();

// }

// ==============================================================================

// Constructor Initialization lists:
 
//  #include<iostream>
//  #include<string>
//  using namespace std;

// class Player
// {
//   private:
//     std::string name;
//     int health;
//     int xp;

//   public:
//     // overloaded Constructors:
//     Player();
//     Player(std::string name_val);
//     Player(std::string name_val,int health_val, int xp_val);

// };

// Player::Player()
// {
//   name = " None ";
//   health = 0;
//   xp = 0;
// }

// Player::Player(std::string name_val)
// {
//   name = name_val;
//   health = 0;
//   xp = 0;
// }

// Player::Player(std::string name_val,int health_val, int xp_val)
// {
//   name = name_val;
//   health = health_val;
//   xp = xp_val;
// }

// int main()
// {
//   Player empty;
//   Player frank{"frank"};
//   Player villain{"villain",100,55};

//   return 0;
// }
// ===============================================================================

// // Delegating Constructors:
// #include<iostream>
// #include<string>
// using namespace std;

// class Player
// {
//   private:
//   std::string name;
//   int health;
//   int xp;

// public:
//   // Overloaded Constructors:

//   Player();
//   Player(std::string name_val);
//   Player(std::string name_val,int health_val , int xp_val);
    
// };

// Player::Player()

//   :Player{"None",0,0}
//   {
//     cout << " No args Constructor " << endl;

//   }

// Player::Player(std::string name_val)
//   :Player{name_val,0,0}
//   {
//     cout << " One - args Constructor " << endl;

//   }

// Player::Player(std::string name_val, int health_val, int xp_val)
//  :name{name_val}, health{health_val} , xp{xp_val}
//  {
//   cout << " Three - args constructor " << endl;
//  }

  

// int main()
// {

//   Player empty;
//   Player frank {"Frank"};
//   Player villain{"villain", 100,55};

//   return 0;

// }
// ===========================================================================
// Using Const with classes:
// const Player villain{"Villain", 100 , 50};

// villain.set_name(" Nice guy ");                     // Error

// std::cout << villain.get_name() << std::endl;       // Error
// ===========================================================================

// What happens when we call a member methods on a const object?
// It shows the compile-time error because we update the assigned value of the num 25 by 10.

// #include<iostream>
// #include<conio.h>
// using namespace std;

// int main()
// {
//   // declare the value of tje const
//   const int num = 25;
//   num = num + 10;
//   return 0;
// }

// =========================================================================================

// In the above program, we declared and assigned the const variables x and y at initial. And then, store the result of two const variables to the 'z' variable to print the sum.
// Note: While the declaration of the const variable in the C++ programming, 
// we need to assign the value of the defined variables at the same time 
// else, it shows the compile-time error.

// #include<iostream>
// #include<conio.h>
// using namespace std;

// int main()
// {
//   // declare variables
//   const int x = 20;
//   const int y = 25;

//   int z;
//   // add the value of x and y

//   z = x + y;

//   cout << " The Sum of the x and y is: " << z << endl;
//   return 0;
// }
// ==========================================================================================

// CONSTANT POINTER:



// 




 