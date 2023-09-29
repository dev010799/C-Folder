// #include<iostream>
// using namespace std;

// // Problem : Print all subarrays of a given array

// void printSubarrays(int arr[],int n)
// {
//   for(int i = 0; i < n; i++){
//     for(int j = i; j < n; j++){
//       for(int k = i; k <=j; k++){
//         cout << arr[k] <<",";
        
//       }
//       cout << endl;
//     }
//     cout << endl;
//   }
// }

// int main()
// {
//   int arr[] = {10,20,30,40,50,60}
//   int n = sizeof(arr)/sizeof(int);

//   printSubarrays(arr,n);

//   return 0;
// }

// Homework:
// Print the sum of each subarray & find out the largest sum:
// find out the largest sum of subarray
// Brute force approach..
// Time complexity:: O(N^3) to solve this Particular problem..

// #include<iostream>
// using namespace std;

// int largestSubarraySum1(int arr[],int n)
// {
//   int largest_sum = 0;

//   for(int i = 0; i < n; i++){
//     for( int j = i; j < n; j++){
//       int subArraySum = 0;
//       for(int k = i; k <= j; k++){
//         subArraySum += arr[k];
//       }

//      largest_sum = max(largest_sum,subArraySum);
//     }
//   }
//   return largest_sum;
// }

// int main()
// {
//   int arr[] = {-2,3,4,-1,5,-12,6,1,3};
//   int n = sizeof(arr)/sizeof(int);

//   cout << largestSubarraySum1(arr,n);

//   return 0;
// }

// Expected output :: 11

//==========================================================
// #include<bits/stdc++.h>
// using namespace std;

// void printSubarrays(int arr[],int n)
// {
//   // The first 2 for loops are for i and j.
//   // The third loop iterate over all elements
//   for(int i=0;i<n;i++)
//   {
//     for(int j=i;j<n;j++)
//     {
//       // cout << "("<<i << "," << j <<"),"; 
//       for(int k=i;k<=j;k++)
//       {
//          cout << arr[k];
//       }
//       cout << endl;
//     }
//     cout << endl;
//   }
// }

// int main()
// {
//   int arr[] = {10,20,30,40,50,60};
//   int n = sizeof(arr)/sizeof(int);
  
//   printSubarrays(arr,n);

//   return 0;

// }
// ===========================================================

// Print the sum of each subarray & find out the largest sum:

// #include<bits/stdc++.h>
// using namespace std;

// int largestSubarraySum1(int arr[],int n)
// {
//   int largest_sum = 0;
//   for(int i=0;i<n;i++)
//   {
//     for(int j=i;j<n;j++)
//     {
//       int subarraySum = 0;
//       for(int k=i;k<=j;k++)
//       {
//          subarraySum += arr[k];
//       }

//       // put a check is subarraySum > largest_sum
//       largest_sum = max(largest_sum,subarraySum);

//       cout << endl;
//     }
//   }
//   return largest_sum;
// }

// int main()
// {
//   int arr[] = {10,20,30,40,50,60};
//   int n = sizeof(arr)/sizeof(int);

//   cout << largestSubarraySum1(arr,n);
// }
// ===============================================

#include<bits/stdc++.h>
using namespace std;

int largestSubarraySum1(int arr[],int n)
{ 
  int largest_sum = 0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      int subarraySum = 0;
      for(int k=i;k<=j;k++)
      {
        // cout << arr[k];
        subarraySum += arr[k];
      }

      // put a check is subarraysum > largest_sum
      largest_sum = max(largest_sum,subarraySum);
    }
  }
  return largest_sum;

}
int main()
{
  int arr[] = {10,20,30,40,50,60};
  int n = sizeof(arr)/sizeof(int);
  
  largestSubarraySum1(arr,n);

}








