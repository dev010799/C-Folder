#include<iostream>  
using namespace std;    
// int main()  
// {  
// double factorial(double);  
// double fact,value;  
// cout<<"Enter any number: ";  
// cin>>value;  
// fact=factorial(value);  
// cout<<"Factorial of a number is: "<<fact<<endl;  
// return 0;  
// }  
// double factorial(double n)  
// {  
// if(n<0)  
// return(-1); /*Wrong value*/    
// if(n==0)  
// return(1);  /*Terminating condition*/  
// else  
// {  
// return(n*factorial(n-1));      
// }  
// } 

class Player
{
  private:
    std::string name;
    int health;
    int xp;

  public:
    Player(std::string name_val = " None ", int health_val = 0 , int xp_val = 0);

};

 Player: Player(std::string name_val, int health_val, int xp_val)
 :name{name_val}, health{health_val}, xp{xp_val}
 {
  cout << " Three - args constructor " << endl;
 }

 int main()
 {
  Player empty;
  Player frank{" Frank "};
  Player villain{" villain ", 100 , 55};

  return 0;
 }



