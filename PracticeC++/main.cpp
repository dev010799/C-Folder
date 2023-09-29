// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   for (int i = 1; i <= 9; i++)
//   {
//     cout << i;
//   }

//   return 0;
// }

//=============================
// int main()
// {
//   for(int i=0;i<=9;i++)
//   {
//     cout << "My name is Dev" << endl;
//   }

//   return 0;
// }
// ================================

// find the sum of first N natural numbers

// #include<iostream>
// using namespace std;

// int main()
// {
//   int num,sum;
//   sum = 0;

//   cout << " Enter a positive integer ";
//   cin>>num;

//   for(int i = 0; i <= num;i++)
//   {
//     sum = sum +  i;
//   }

//   cout << sum << endl;
//   return 0;
// }

// =============================================


// int main()
// {
//   int num_array[] = {1,2,3,4,5,6,7,8};
//   for(auto n : num_array)
//   {
//     cout << n;
//   }
// }

// ==============================================
// display a multiplication table:
// #include<iostream>
// using namespace std;

// int main()
// {
//   int n;

//   cout << " Enter a positive integer " << endl;
//   cin >> n;

//   for (int i=1;i<=10;i++)
//   {
//     cout << n << " * " << i << " = " << n * i << endl;
//   }

//   return 0;
// }

// =============================================================
// Display a multiplication table upto a given range.
// ================================================
// int main()
// {
//   int n,range;

//   cout << " Enter an integer ";
//   cin >> n;

//   cout << " Enter a range ";
//   cin >> range;

//   for(int i = 1;i<=range;i++)
//   {
//     cout << n << " * " << i << " = " << n * i << endl;
//   } 

//   return 0;


// }
// ========================================================
// add 2 numbers:
// =======================================================

// int main()
// {
//   int a,b,c;

//   cout << " Enter 2 integers " << endl;
//   cin >> a >> b;

//   c =  a + b;
//   cout << c;

//   cout << a << " + " << b << " = " << c;
// }
// ==============================================
// int main()
// {
//   int a,b,c;

//   cout << " Enter 3 integers ";
//   cin >> a >> b >> c;

//   if(a > b)
//   {
//     cout << " a is greater " << endl;
//   }
//   else if(b > c)
//   {
//     cout << " b is greater " << endl;

//   }

//   else
  
//     cout << " c is greater " << endl;
  

//   return 0;
// }
// =================================================
// #include<bits/stdc++.h>
// using namespace std;


// int main()
// {

//   int arr[] = {10,20,30,40,50,60};
//   int n = sizeof(arr)/sizeof(int);

//   for(int i = 0;i<n;i++)
//   {
//     cout << arr[i];
//   }

//   reverse(arr,arr+n);
//   cout << " \n Reverse Array: ";
//   for(int i=0;i<n;i++)
//   {
//     cout << arr[i];
//   }

//   return 0;

 
  
// }
//===========================================
// #include<iostream>
// using namespace std;

// int main()
// {
//   int rows;
//   cout << " Enter the number of rows: ";
//   cin >> rows;

//   for(int i=0;i<rows;i++)
//   {
//     for(int j=1;j<(rows - i);j++)
//     {
//       cout << " ";

//     }

//     for(int k=0;k<=i;k++)
//     {
//       cout << "      "<< val;

//       val = val*(i - k)/(k + 1);
//     }
//     cout << endl << endl;
//   }

//   cout << endl;

// }

// ==============================================
// Armstrong problem
// =================================================

// int main()
// {
//   int num,temp,rem,sum=0;

//   cout << " Enter a number to be checked ";
//   cin >> num;

//   temp = num;

//   while(temp != 0)
//   {
//     rem = temp % 10;
//     sum = sum + rem*rem*rem;
//     temp = temp/10;
//   }

//   if(sum == num)
//   cout << " \n " << num <<  "is an Armstrong number ";
//   else
//   cout << " \n " << num << " Not an Armstrong number ";
  

  
// }
// =============================================================

// int g;          // global variables.

// int main()
// {
//   int a,b;

//   // a = 10;
//   // b = 20;

//   cout << " Enter an integers ";
//   cin>> a >> b;

//   g = a + b;

//   cout << g;

  
// }
// ==============================================

 

// void addition(int a,int b)
// {
//   a + b;
// }

// int main1()
// {
//   int a = 10;
//   int b = 20;

//   cout << " Enter an integer " << endl;
//   cin >> a >> b;

//   g = a/b;
//   cout << g << endl;

//   return 0;
// }

// int subtraction(int m,int n)
// {
//   return m - n;
// }

// int main2()
// {
//   int m,n;

//   cout << " Enter an integer: ";
//   cin >> m >> n;

//   subtraction(20,10);

//   g = m - n;
//   cout << g << endl;

//   return 0;
// }

// ==================================

// int g;
// g = 10;
// cout << g;
// ====================================

// int x ; // variable declaration. it stores garbage value i.e doesnt belong to us.
// int x = 10; // declaration + initializartion.
// char group = 'A';       // type of variable is char , name of variable is group,and it take 1 bytes in memory.

// ========================================================================================================================

// int main()
// {
//   int i = 0;
//   for(;;)
//   {
//     cout << i << endl;
//     i++;
//     if(i > 10)
    
//       break;
    
//   }
// }
// =============================================
// code for factorial:
// int main()
// {
//   int n,i,fact=1;

//   cout << " Enter an integer " << endl;
//   cin >> n;

//   for(int i = 1; i <= n;i++)
//   {
//     fact *= i;  
//   }

//   cout << " factorial of " << n << "is" << fact;
  

//   return 0;
// }

// int main()
// {
//   int x = 10;
//   int y = 20;
//   // int *p;

//   // cout << x  << endl;
//   // cout << &x << endl;
//   // cout << &p << endl;
//   // cout << *p << endl;
//   // cout << p << endl;

//   cout << x << endl;
//   // cout << &x << endl;
//   cout << y << endl;
//   // cout << &y << endl;

//   return 0;
  

// }

// ===============================================

// int main()
// {
//   // pointers are used to store the address of a variable.
//   int m = 10;
//   int *p1;
//   int n = 20;
//   int *p2;

//   p1 = &m;
//   p2 = &n;

//   cout << m << endl;           
//   cout << &m << endl;
//   cout << n << endl;
//   cout << &n << endl; 
//   cout << *p1 << endl;
//   cout << *p2 << endl;

 
// }
// =================================================
// String:

// int main()
// {
//   char S[10] = {" Hello "};
//   cout << S << endl;

//   char A[21] = {" DevMishra "};
//   cout << A << endl;

//   char L[] = {" My name is Devprakash "};
//   cout << L << endl;

//   char M[] = {" My  name is Rahul  "};
//   cout << M << endl;

//   char D[] = {'T','O','Y','O','T','A'};
//   cout << "\n" << endl;
//   cout << D << endl;

//   char s[] = {'T','O','Y','O','T','A','\0','P','P','P'};  // P is not visible after the null character.
//   cout << s << endl;

   

//   return 0;
// }
// =======================================================================================================

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  
}