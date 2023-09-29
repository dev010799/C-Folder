#include<iostream>
// #include<iomanip>
#include<vector>
#include<string>
using namespace std;

// Example 1

// double calc_cost(double base_cost,double tax_rate = 0.06);

// double calc_cost(double base_cost,double tax_rate)
// {
//   return base_cost += (base_cost * tax_rate);
// }

// int main()
// {
//   double cost {0};
//   cost = calc_cost(200.0);
//   cost = calc_cost(100.0, 0.08);

//   cout << endl;
//   return 0;

// }

// Example 2

// double calc_cost(double base_cost = 100.0,double tax_rate = 0.06,double shipping = 3.50);
// void greeting(string name,string prefix = "Mr.",string suffix = "");
// double calc_host(double base_cost,double tax_rate,double shipping)
// {
//   return base_cost += (base_cost * tax_rate) + shipping;
// }

// void greeting(string name,string prefix,string suffix)
// {
//   cout << "Hello" << prefix + " " + name + " " + suffix << endl;
// }





// int main()
// {
//   double cost{0};
//   cost = calc_cost(100.0,0.08,4.25);                  // 100 + 8 + 4.25

//   cout << fixed << setprecision(2);
//   cout << " Cost is " << cost << endl;                // 112.25

//   cost = calc_cost(100.0,0.08);                       // will use default shipping 100 + 8 + 3.50
//   cout << " Cost is: " << cost << endl; 

//   cost = calc_cost(200.0);                           // will use default tax and shipping 200 + 12 + 3.50.
//   cout << " Cost is: " << cost << endl;              // 215.50 
  
//   greeting("Glenn Jones", "Dr.", "M.D.");
//   greeting("james Rogers", "Professor","Ph.D.");
//   greeting("Frank Miller","Dr.")

  // cout << endl;
  // return 0;
             
// }
// =====================================================
// Parameters should have different type:
// add(int a,int b)
// add(double a,double b)

// Below is the implementation of the above discussion:

// void  add(int a,int b)
// {
//   cout << " Sum = " << (a + b) << endl;
// }

// void add(double a,double b)
// {
//  cout << " Sum = " << (a + b) << endl;
// }

// int main()
// {
//   add(10,12);
//   add(10.2,13.2);
// }
// =========================================================

// Example 2
// add(int a,int b)
// add(int a,int b, int c)

// void mult(int a , int b)
// {
//   cout << " Multiplication = " << a * b << endl;
// }

// void mult(int a, int b, int c)
// {
//   cout << " Multiplication = " << a * b * c << endl;
// }

// int main()
// {
//   mult(10, 20);
//   mult(12,32,43);
  
//   cout << endl;
//   return 0;
// }

// ==================================================================

// Parameters should have a different sequence of params..

// add(int a,double b)
// add(double b, int b)

// void add(int a, double b)
// {
//   cout << " Sum =  " << a + b << endl;
// }

// void add(double a,int b)
// {
//   cout << " Sum = " << a + b << endl;
// }

// int main()
// {
//   add(10, 10.2);
//   add(10.2, 90);
// }

// ========================================================================

void print(int = 100);
void print(double);
void print(string);
void print(string,string);
void print(vector<string>);

void print(int num)
{
  cout << " Enter the integer value " << num << endl;
}

void print(double num)
{
  cout << " Enter the double value " << num << endl;
}

void print(string s,string  t)
{
  cout << " Printing 2 Strings " << s << " and " << t << endl; 
}

void print(vector<string> v)
{
  for (auto s: v)
    cout << s + " ";
  cout << endl;

}

int main()
{
  print();                        // It prints the 100 because its an default argument.. i.e We set the value in void constructor in above...i.e.void print(int = 100)
                                  // Same for double also but if we have 1 print() call then its good but it shows compiler error if we have two values i.e.double or int.
  print(100);
  print('A');                    // It shows an value of ASCII code... // i.e. A = 65..
  print(123.5);
  print(123.5F);                 // Float is converted to a double.
  // string s {" This is a string "};
  // print(s);
  // print(" C style string ", s);

  vector<string>three_stooges{" Larry "," Moe "," Curly "};
  print(three_stooges);
  
  
}
