// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//   // vector<int> arr = {1,2,3,4,5,6};

//   // Size of the vector(No of elements)
//   // cout << arr.size() << endl;

//   // Fill Constructor:
//   vector<int> arr(10,7);
  
  
//   // Add 1 element in last of the vector.
//   arr.push_back(12);
//   cout << arr.size() << endl;
  
//   // Remove 1 element from last of the vector.
//   arr.pop_back();
//   cout << arr.size() <<  endl;
  
//   // Capacity basically tells you what's the actual memory allocated to this particular vector.
//   // vector was full and it has doubled itself(at the memory level doubling is happen).
//   // cout << arr.capacity() << endl;

//   // How we print all the elements of vector..
//   // for(int i = 0; i < arr.size();i++)
//   // {
//   //   cout << arr[i] << endl;
//   // }

 
  
  
// }

// ========================================================
// Problem Solving Maximum Subarray Sum.

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int maxSumSubarray(vector<int> arr)
// {
//   // All negative elements
//   bool allNeg = true;
//   int largest = INT_MIN;

//   for(int x:arr)
//   {
//     if(x > 0)
//     {
//       allNeg = false;
//     }
//     largest = max(largest,x);
//   }

//   // special case
//   if(allNeg)
//   {
//     return largest;

//   }

//   // kadane's Logic:
//   int cs = 0;
//   int ans = 0;
//   for(int x:arr)
//   {
//     cs = cs + x;

//     if(cs < 0)
//     {
//       cs = 0;
//     }

//     ans = max(ans,cs);
//   }

//   return ans;
// }
//=========================================================

// Lower Bound Problem solving : 
// #include<bits/stdc++.h>    // include all the standard libraries
// using namespace std;

// int lowerBound(vector<int>A,int val)
// {
//   int s = 0;
//   int e = A.size() - 1;
//   int ans = -1;

//   while(s <= e)
//   {
//     int mid = (s + e)/2;
//     if(A[mid] <= val)
//     {
//       ans = A[mid];
//       s = mid + 1;
//     }
//     else
//     {
//       e = mid - 1;
//     }
//   }

//   return ans;
// }

// ================================================================
// Problem to solve sorted pair sum:
// #include<bits/stdc++.h>
// using namespace std;

// pair<int,int> closestSum(vector<int> arr,int x)
// {
//   int n = arr.size();
//   int s = 0, e = n - 1;
//   int diff = INT_MAX;
//   int leftIdx,rightIdx;

//   while(s < e)
//   {
//     int cs = arr[s] + arr[e];
//     if(abs(cs - x) < diff)
//     {
//       leftIdx = s;
//       rightIdx = e;
//       diff = abs(cs - x);
//     }

//     if(cs > x)
//     {
//       e--;
//     }
//     else
//     {
//       s++;

//     }
//   }
//   return {arr[leftIdx],arr[rightIdx]};
// }

// =================================================

//  K-Rotate problem:
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> kRotate(vector<int> a, int k)
// {
//   n = a.size();
//   k = k % n;

//   vector<int>output;
//   for(int i = n-k; i <= n - 1; i++)
//   {
//     output.push_back(arr[i]);
//   }

//   for(int i = 0; i < n - k;i++)
//   {
//     output.push_back(arr[i]);
//   }
//   return output;
// }
// ==================================================

// K-rotate Problem optimised(Inplace.)

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> kRotate(vector<int> arr, int k)
// {
//   int n = arr.size();
//   k = k%n;

//   reverse(arr.begin(),arr.begin() + n - k);
//   reverse(arr.begin() + n - k, arr.end());
//   reverse(arr.begin(),arr.end());

//   return arr;
// }
