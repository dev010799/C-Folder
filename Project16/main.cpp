#include <iostream>
using namespace std;
int main(){
  // a += 1;      /* i.e. a = a + 1 */
  // a /= 5;      /* i.e. a = a * (b + c)*/
  // a *= b + c;  /* i.e. a = a * (b + c)*/

  // cost += items * tax;   /* cost = cost + (items * tax); */
  const int dollar_value{100};
  const int quarter_value{25};
  const int dime_value{10};
  const int nickel_value{5};
  // const int penny_value{1};

  int change_amount {};

  // Without using Modulo operator:

  cout << "Enter an amount in cents:";
  cin >> change_amount;

  int balance{}, dollars{},quarters{},dimes{},nickels{},pennies{};

  dollars = change_amount / dollar_value;
  balance = change_amount - (dollars * dollar_value);

  quarters = balance / quarter_value;
  balance -= quarters * quarter_value;

  dimes = balance / dime_value;
  balance -= dimes * dime_value;

  nickels = balance / nickel_value;
  balance -= nickels * nickel_value;

  pennies = balance;

  


  // cout << " 1 dollar is 100 cents " << dollar << endl;
  // cout << " 1 quarter is 25 cents " << quarter << endl;
  // cout << " 1 dime is 10 cents " << dime << endl;
  // cout << " 1 nickel is 5 cents" << nickel << endl;
  // cout << " 1 penny is 1 cent"  << penny << endl;

  // total = cents * amount;
  // cout << " Enter an amount in cents: " << total << endl;

  return 0;




}