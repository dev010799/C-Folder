#include<iostream>
using namespace std;

// This loop runs in order of N i.e. O(N) times
// This is order N based solution
// And it does not take any extra space like we did in the prefix sum approach.
// It also  takes order 1 space in terms of time and space O(1).
// This is the best possible solution.

int maximum_subarray_sum(int arr[],int n)
{
  int cs = 0;       // current Sum is 0.
  int largest = 0;  // largest we also say 0;

  for (int i = 0; i < n; i++)
  {
    cs = cs + arr[i];
    if(cs < 0)
    {
      cs = 0;
    }
    largest = max(largest,cs);
  }

  return largest;
}

int main()
{
  // Array containing
  int arr[] = {-2,3,4,-1,5,-12,6,1,3};
  int n = sizeof(arr)/sizeof(int);

  cout << maximum_subarray_sum(arr,n) << endl;

  return 0;
}