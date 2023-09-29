#include<iostream>
using namespace std;

// Why it is working in O(N^2) times ..
// Because this loop is independent i.e. for(i = 1;i < n;i++) so this loop works in O(n) time
// And remaining 2 for loops are work in  order of N i.e O(N^2) times.
// Thats why over all the complexity would remain order of N square i.e O(N^2).

int largestSubarraySum2(int arr[],int n){

  int prefix[100] = {0};
  prefix[0] = arr[0];

  for(int i = 1; i < n; i++)
  {
    prefix[i] = prefix[i - 1] + arr[i];
  }


  // largest sum login
  int largest_sum = 0;

  for(int i = 0; i < n; i++)
  {
    for(int j = i; j < n; j++){
       int subarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];

       largest_sum = max(largest_sum,subarraySum);
    }
   
  }
  return largest_sum;
}

int main()
{
  // Array containing:
  int arr[] = {-2,3,4,-1,5,-12,6,1,3};
  int n = sizeof(arr)/sizeof(int);

  // cout << largestSubarraySum1(arr,n) << endl;      // The first approach works in order of O(N^3) times.. 
  cout << largestSubarraySum2(arr,n) << endl;         // The second approach works in order of O(N^2) times..

  return 0;
}











