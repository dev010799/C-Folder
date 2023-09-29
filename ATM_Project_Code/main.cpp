#include <iostream>
#include<string>
#include<climits>
// #include<vector>
// #include<fstream>
// #include<cmath>
// #include<bitset>
#include<bits/stdc++.h>
using namespace std;



// /*

// ░█████╗░████████╗███╗░░░███╗
// ██╔══██╗╚══██╔══╝████╗░████║
// ███████║░░░██║░░░██╔████╔██║
// ██╔══██║░░░██║░░░██║╚██╔╝██║
// ██║░░██║░░░██║░░░██║░╚═╝░██║
// ╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░░░░╚═╝

// */
// #define OPTION_SIZE 4
// #define MAX_DEPOSIT 10000
// class atmsystem
// {

//     string options[OPTION_SIZE] = {"", "Withdraw", "Deposit", "Log Out and Exit"};
// public:

//     int mainAtm()
//     {
//         unsigned int choiceInput = 0;
//         int bankFunds = 0;
//         string password = " ", accountNumber = " ";

//         cout << "  ______  ________  __       __ " << endl << " /      \\|        \\|  \\     /  \\" << endl << " | $$$$$$\\$$$$$$$$ | $$\\ / $$  |" << endl << "| $$__| $$  | $$   | $$$\\ /  $$$" << endl << "| $$    $$  | $$   | $$$$\\  $$$$" << endl << "| $$$$$$$$  | $$   | $$\\$$ $$ $$" << endl<<"| $$  | $$  | $$   | $$ \\$$$| $$" << endl<<"| $$  | $$  | $$   | $$  \\$ | $$"<<endl<<" \\$$   \\$$   \\$$    \\$$      \\$$"<<endl;
//         cout << "\n";

//         cout << "Account Number: ";
//         cin>>accountNumber;

//         cout << "Account Password: ";
//         cin >> password;

        
        
//         cout << "\n\n";
//     backLoop:
//         cout << "Funds: " << bankFunds<<"$";
//         cout << "\n";

        
//         cout << "=================================================" << endl << endl<<"pls Enter an option."<<endl<<endl<<"================================================="<<endl;

//         for (int index = 1; index < OPTION_SIZE; index++)
//         {
//             cout << options[index] << "<|" << index<<"| ";
//         }
//         cout << endl << endl;

//         do
//         {
//             cout << "Option: ";
//             cin >> choiceInput;
//             cout << endl;

//             if (choiceInput >= OPTION_SIZE || choiceInput <= 0)
//             {
//                 cout << "Error Type: Input Error." << endl;
//             }


//         } while (choiceInput >= OPTION_SIZE || choiceInput <= 0);

//         switch (choiceInput)
//         {
//         case 1:
//             cout <<endl<< "OK! 200  |";
//             mainWithdraw(&bankFunds);
//             cout << bankFunds;
//             break;

//         case 2:
//             cout << endl << "OK! 201  |";
//             mainDeposit(&bankFunds);
//             break;
        
//         case 3:
//             cout << "202 Logged out Successful." << endl;
//             accountNumber = "";
//             password = "";
            
//             break;

//         default:
//             cout << "Error Type: couldnt reach services. pls restart the machine." << endl;
//             return 1;
//             break;
//         }
//         if (choiceInput != 3)
//         {
//             goto backLoop;
//         }
//         else
//         {
//             return 0;
//         }
//         return 0;
//     }


// private:

//     bool mainWithdraw(int* bankFunds)
//     {
//         unsigned int withdrawAmount = 0;

//         cout << "Withdraw Amount: ";
//         cin >> withdrawAmount;
//         cout << endl;
//         if (*bankFunds >= withdrawAmount)
//         {
//             *bankFunds -= withdrawAmount;
//         }
//         else
//         {
//             cout << "Error Type: Not enough funds for transaction. must be above 0." << endl;
//             return false;
//         }
//         return true;
//     }

//     bool mainDeposit(int* bankFunds)
//     {
//          unsigned int depositAmount = 0;

//          cout << "Deposit Amount: ";
//          cin >> depositAmount;
//          cout << endl;

//          if (depositAmount <= MAX_DEPOSIT && depositAmount > 0)
//          {
//              *bankFunds += depositAmount;
//          }
//          else
//          {
//              cout << "Error. Possible reasons: cant deposit under 1 dollar. cant go above bank deposit limit(" << MAX_DEPOSIT << ")." << endl;
//              return false;
//          }
//          return true;
//     }

    

// };
// int main()
// {
//     int check = 0;
//     atmsystem mainAtmSystem;

    
//     while (check!=1)
//     {
//         check = mainAtmSystem.mainAtm();
//     }


//     return 0;





// }

// ==============================================================
// #include<iostream>
// using namespace std;

// int main()
// {

//     char middle_initial{'J'};
//     cout << "My middle initial is " << middle_initial << endl;

//     int countries_represented{65};
//     cout << "There were " << countries_represented << " Countries represented in my meeting " <<  endl; 

//     long people_in_florida {20610000};
//     cout << "There are about" << people_in_florida << endl;

//     long long distance_to_alpha_centauri{9'461'000'000'000};
//     cout << "There are about " << distance_to_alpha_centauri << "people on earth" << endl;

    

// }
// ======================================================================
// 
int main()

// ======================================================================
{
    //Floating point types:
    // float car_payment{401.23};
    // cout << "My car payment is " << car_payment << endl;

    // double pi{3.14159};
    // cout << "PI is: " << pi << endl;

    // long double large_amount{2.7e120};
    // cout << large_amount << "is a very big number" << endl;

    // char Types:
    // char middle_initial{'J'};
//     cout << "My middle initial is " << middle_initial << endl;

//     int countries_represented{65};
//     cout << "There were " << countries_represented << " Countries represented in my meeting " <<  endl; 

//     long people_in_florida {20610000};
//     cout << "There are about" << people_in_florida << endl;

//     long long distance_to_alpha_centauri{9'461'000'000'000};
//     cout << "There are about " << distance_to_alpha_centauri << "people on earth" << endl;

    
    /************************************************
     * Boolean Types:
    *************************************************/
//    bool game_over {false};     // 0 will be shown in o/p.
//    cout << "The value of game over is" << game_over << endl;

   /*************************************************
    * Overflow Example:
   **************************************************/
//   short value1 = {30000};
//   short value2 = {3000};
//   short sum {value1 * value2};

//   cout << "The sum of " << value1 << "and" << value2 << "is" << sum <<  endl;
 
/***************************************
 * Size of a Variable:
 ***************************************/
// The Size of Operator:
/*
cout << "sizeof information" << endl;
cout << "=======================" << endl;

cout << "char:" << sizeof(char) << "bytes." << endl;
cout << "int:" << sizeof(int) << "bytes."<< endl;
cout << "Float:" << sizeof(float) << "bytes." << endl;
cout << "long:" << sizeof (long) << "bytes." << endl;
cout << "Short:" << sizeof(short) << "bytes" << endl;
cout << "long long:" << sizeof(long long) << "bytes." << endl;
cout << "Double:" << sizeof(double) << "bytes" << endl;
cout <<"long double:" << sizeof(long double) << "bytes" << endl; 
*/

/*
cout << "===========================" << endl;
cout << "maximum_values: " << endl;
cout << "char: " << CHAR_MAX << endl;
cout << "int: " << INT_MAX << endl;
cout << "short " << SHRT_MAX << endl;
cout << "long: " << LONG_MAX << endl;
cout << "long long: " << LLONG_MAX << endl;

cout << "Minimum values:" << endl;
cout << "char: " << CHAR_MIN << endl;
cout << "int: " << INT_MIN << endl;
cout << "short " << SHRT_MIN << endl;
cout << "long: " << LONG_MIN << endl;
cout << "long long: " << LLONG_MIN << endl;

cout << "===================================="<<endl;
cout << "Size of using variable names" << endl;
int age{21};
cout << "age is " << sizeof (age) <<" bytes " << endl;
// or
cout << "age is " << sizeof age << " bytes " << endl;
cout << age << endl;

double wage{22.24};
cout << "Wage is " << sizeof (wage) << " bytes " << endl;
// or
cout << "Wage is " << sizeof wage << " bytes " << endl;
cout << wage << endl;
*/

/**********************************
  Constants:
 **********************************
*/
// 1. Literal Constants:
// The Most obvious kind of constant:
// Constants Declared using const keyword 

// const double pi {3.1415926};
// const int months_in_year {12};

// Defined Constants:
// constants declared using the const keyword

// #define pi 3.1415926

/*
// =====================================================================
// Problem Solving Practice:
// =====================================================================

cout << "Hello, Welcome to Frank's Carpet Cleaning service" <<  endl;
cout << "How many rooms Would you like cleaned? " << endl; 

int number_of_rooms{0};
cin >> number_of_rooms;

const double price_per_room{32.5};
const double sales_tax{0.06};
const int estimate_expiry{30};      // days

cout << "\nEstimate for carpet cleaning service " << endl;
cout << "Number of rooms: $" << endl;
cout << "Price per room: $ " << 30 << endl;
cout << "Cost: $ " << 30 * number_of_rooms << endl;
cout << "Tax:$" << 30 * number_of_rooms * 0.06 << endl;
cout << "========================================" << endl;
cout << "Total Estimate: $" << (30 * number_of_rooms) + (30 * number_of_rooms * 0.06) << endl;
cout << "This Estimate is valid for " << 30 << "days" << endl; 

*/
// Problem Solving:
/*

cout << "Hello,Welcome to Frank's Carpet Cleaning Service " << endl;

int small_rooms{0};
cout << "\nHow many small rooms would you like cleaned ?" << endl;
cin >> small_rooms;

int large_rooms{0};
cout << "\nHow many small rooms would you like cleaned ?" << endl;
cin >> large_rooms;

const double price_per_small_room{25.0};
const double price_per_large_room{35.0};

const double sales_tax {0.06};
const int estimate_expiry {30}; // days. 

cout << "\nEstimate for carpet cleaning service" << endl;
cout << "Number of small rooms: " << small_rooms << endl;
cout << "Number of large rooms: " << large_rooms << endl;

cout << "Price per small room:$" << price_per_small_room << endl;
cout << "Price per large room:$" << price_per_large_room << endl;

cout << "Cost:$" 
     << (price_per_small_room * small_rooms) +
        (price_per_large_room * large_rooms) * sales_tax
     << endl;

cout << "Tax:$" 
     << ((price_per_small_room * small_rooms) +
        (price_per_large_room * large_rooms)) * sales_tax
     << endl;

cout << "==============================================" << endl;
cout << "Total estimate: $"
     << ((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) +
        (((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) * sales_tax)
     << endl;

cout << "The Estimate is valid for" << estimate_expiry << "days" << endl;

cout << endl;
return 0;

*/






















  

  







    return 0;

}


