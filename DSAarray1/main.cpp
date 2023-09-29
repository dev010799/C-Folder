#include<iostream>
using namespace std;

// int main()
// {
//   int marks[100];

//   int n;
//   cout << " Enter the no of students ";
//   cin >> n;

//   // Input:
//   for(int i = 0; i< n; i++)
//   {
//     cin >> marks[i];
//   }

//   // Output:
  
//   for(int i = 0; i < n; i++)
//   {
//     cout << marks[i] << " , ";
//   }
  
//   cout << endl;
  

//   return 0;
// }

// ================================================
// Try this with Start input from 1:

// int main()
// {
//   int marks[100] = {0};    // If we initialize with -1 then remaining value becomes Garbage value..in output..

//   int n;
//   cout << " Enter the no of students ";
//   cin >> n;
  
//   // Assign a value:
//   // marks[0] = -1;

//   // Input:
//   for(int i = 1; i<= n; i++)
//   {
//     cin >> marks[i];

//     marks[i] = marks[i] * 2;
//   }

//   // Update

//   // Output:
  
//   for(int i = 0; i < 100; i++)
//   {
//     cout << marks[i] << " , ";
//   }
  
//   cout << endl;
  

//   return 0;
// }

// ================================================
#include<bits/stdc++.h>
using namespace std;
// ===========================================================
// K-rotate problem 
// Problem with this:
// O(n) space.
// This solution is with extra array.

// vector<int>kRotate(vector<int>arr,int k)
// {
//   n = arr.size();
//   k = k%n;                    // effective rotation.

//   vector<int>output;
//   for(int i=n-1;i<=n-k;i++)
//   {
//     output.push_back(arr[i]);
//   }

//   for(int i =0; i<=n-k;i++)
//   {
//     output.push_back(arr[i]);
//   }

//   return output;
// }

// ============================================================
// K-rotate problem with optimised solution:(using STL)
// this solution is without creating an extra array.
// Here im not going to write reverse function instead of that we use reverse STL library.

vector<int>kRotate(vector<int>arr,int k)
{
  int n = arr.size();
  k = k%n;

  reverse(arr.begin(),arr.begin() + n-k);      // First reverse the n-k elements.
  reverse(arr.begin() + n-k,arr.end());        // second reverse the k elements. 
  reverse(arr.begin(),arr.end());              // third reverse the entire array.
}

int main()
{
  vector<int>arr = {10,20,30,40,50,60};

}
