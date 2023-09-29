#include<iostream>
#include<string.h>
using namespace std;
// #include<vector>

// class Player
// {
//   // Attributes:
//   public:
//   string name{"Player"};
//   int health{100};
//   int xp{3};

//   // Methods
//   void talk(string);
//   bool is_dead();
// };

// class Account
// {
//   // attributes
//   public:
//   string name{"Account"};
//   double balance{0.0};

//   // Methods
//   blood deposit(double);
//   bool withdraw(double);

// };

// int main()
// {

//   Player frank;
//   frank.name = " Frank ";
//   frank.health = 100;
//   frank.xp = 12;
//   frank.talk(" Hi there ");

//   Player *enemy = new Player;
//   (*enemy).name = " Enemy ";
//   (*enemy).health = 100;
//   enemy -> xp = 15;

//   enemy -> talk(" I will destroy you ! ");

//   return 0;

// }

// ======================================================================

// class Player
// {
//   public:
//   string name{};
//   int health;
//   int xp;

//   // methods
//   void talk(string text_to_say)
//   {
//     cout << name << " says " << text_to_say << endl;
//     bool is_dead();


//   };

//   class Account
//   {
    
//     // Attributes
//     public:
//     string name;
//     double balance;

//     // Methods
//     bool deposit(double bal)
//      {
//       balance += bal;
//       cout << " In deposit " << endl;
//      }

//     bool withdraw(double bal)
//     {
//       balance -= bal;
//       cout << " In withdraw " << endl;
//     }
//   };
// =======================================================================

// class Player
// {
//   private:
//   // Attributes:
//   string name{"Player"};
//   int health;
//   int xp;

//   public:
//   // methods
//   void talk(string text_to_say)
//   {
//     cout << name << " says " << text_to_say << endl;
//   };

  

// };

// int main()
// {
//   Player frank;
//   // frank.name = " Frank ";
//   // cout << frank.health << endl;
//   frank.talk(" Hello there ");
//   return 0;
// }

class Account
{
  private:
  string name;
  double balance;

  public:
  void set_balance(double bal)
  {
    balance = bal;

  }
  double get_balance()
  {
    return balance;
  }

void set_name(string n);
string get_name();

bool deposit(double amount);
bool withdraw(double amount);

};

void Account::set_name(string n)
{
  name = n;
}

string Account::get_name()
{
  return name;
}

bool Account::deposit(double amount)
{
  // if verify amount
  balance += amount;
  return true;
}

bool Account::withdraw(double amount)
{
  if(balance - amount >=0)
  {
    balance -= amount;
    return true;
  }
  else
  {
    return false;
  }
  
}

int main()
{
  
  Account frank_account;                                                   // Object 1
  frank_account.set_name(" Franks account ");
  frank_account.set_balance(1000.0);

  if(frank_account.deposit(200))
    cout << " Deposit OK " << endl;

  else
    cout << " Deposit Not allowed " << endl;
  

  if(frank_account.withdraw(500.0))
    cout << " Withdrawal OK " << endl;
  else
    cout << " Not sufficients funds " << endl;

  if(frank_account.withdraw(1500.0))
    cout << " Withdraw OK " << endl;
  else
    cout << " Not sufficient funds " << endl;

   Account Broski_account;                                                   //  Object 2
  frank_account.set_name(" Franks account ");
  frank_account.set_balance(3000.0);

  if(frank_account.deposit(400))
    cout << " Deposit OK " << endl;

  else
    cout << " Deposit Not allowed " << endl;
  

  if(frank_account.withdraw(500.0))
    cout << " Withdrawal OK " << endl;
  else
    cout << " Not sufficients funds " << endl;

  if(frank_account.withdraw(5500.0))
    cout << " Withdraw OK " << endl;
  else
    cout << " Not sufficient funds " << endl;

  return 0;

}

  


