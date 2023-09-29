#include<iostream>
using namespace std;

// ==================================================================
// Calculate the temperature code:
// int main()
// {
//   float C, F;
//   cout << " Enter your temperature in celsius: ";
//   cin >> C;

//   F = C * 1.8 + 32;
//   cout << " In Celsius " << C << "*C ; " << endl;
//   cout << " In Fahrenheit: " << F << " F ; " << endl;

//   return 0;
// }

// ======================================================================
// Code for calculate odd even:

// int main()
// {
//   int a;

//   cout << " Enter the number " << endl;
//   cin >> a;

//   if(a % 2 == 0)
//   {
//     cout << " The number is even " << endl;
//   }

//   else
//   {
//     cout << " The number is odd " << endl;
//   }

//   return 0;
  


// }

// =============================================================================

// code for find greatest in 3 numbers:

// int main()
// {
//   int a,b,c;
//   cout << " Enter the 3 integers value: " << endl;
//   cin >> a >> b >> c;

//   if(a > b)
//   {
//     cout << " a is greater " << endl;
//   }
  
//  else if(b > c)
//   {
//     cout << " b is greater " << endl;
//   }

//   else
//   {
//     cout << " c is greater " << endl;
//   }

//   return 0;
// }

//============================================================================

// code for swapping:
// int main()
// {
//   float a, b;
//   cout << " Enter the first integer ";
//   cin >> a;
//   cout << " Enter the second integer ";
//   cin >> b;

//   a = a + b;
//   b = a - b;
//   a = a - b;

//   cout << " We have swapped your numbers, results in below. " << endl;
//   cout << " a = " << a << endl;
//   cout << " b = " << b << endl;

//   return 0;

// }

// =============================================================================
// Program for leap year:

int main()
{
  int year;
  cout << " Enter a year: ";
  cin >> year;

  if(year % 4 == 0)
  {
    if(year % 100 == 0)
    {
      if(year % 400 == 0)
      {
        cout << " Given " << year << " year is a leap. " << endl; 
      }

      else
      {
        cout << " Given " << year << " year isn't a leap year " << endl;

      }
    }
    else
    {
      cout << " Given " << year << " year is a leap year " << endl;

    }
  }
  else
  {
    cout << " Given " << year << " year isn't a leap " << endl;
  }

  return 0;
}

