#include<iostream>
#include<string>

using namespace std;
// class Player
// {
//   private: 
//   std::string name;
//   int health;
//   int xp;

//   public:

//   void set_name(std::string name_val)
//   {
//     name = name_val;
//   }

//   // Overloaded constructors
//   Player()
//   {
//     cout << " No args constructor called " << endl;
//   }

//   Player(std::string name, int health, int xp)
//   {
//     cout << " Three args constructor called " << endl;
//   }

//   ~Player()
//   {
//     cout << " Destructor called for " << name << endl;
//   }

// };

// int main()
// {
//   Player slayer;
//   slayer.set_name("Slayer");

// }
// {
//   Player frank;
//   frank.set_name(" Hero ");
//   Player hero(" Hero ");
//   hero.set_name(" Hero ");
//   Player villain(" Villain ", 100, 12);
//   villain.set_name(" villain ");
// }

// // No args Constructor:
// Player *enemy = new Player;
// enemy -> set_name(" Enemy ");

// // Args Constructor:

// Player *level_boss = new Player(" Level Boss ", 1000, 300);
// level_boss -> set_name(" Level Boss ");

// delete enemy;
// delete level_boss;

// return 0;

// }

// DELEGATING CONSTRUCTORS:

// class Player
// {
//   private:
//     string name;
//     int health;
//     int xp;

//   public:
//     // Overloaded constructors:
//     Player();
//     Player(string name_val);
//     Player(string name_val, int health_val, int xp_val);

// };

// Player::Player()

//   :Player{"None",0,0}
//   {
//     cout << " No args constructor " << endl;
//   }

//   Player::Player(string name_val)
//   :Player{name_val,0,0}
//   {
//     cout << " One-arg constructor " << endl;
//   }

//   Player::Player(string name_val, int health_val, int xp_val)
//   :Player{name_val}, health{health_val}, xp{xp_val}
//     {
//       cout << " Three args constructor"

//     }
   

//   int main()
//   {
//     Player empty;
//     Player frank{" Frank "};
//     Player villain { " Villain ", 100 , 55};

//     return 0;
//   }


// Pointers Practice:



