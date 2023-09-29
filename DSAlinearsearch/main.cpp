// Linear Search(BRUTE FORCE Technique) example:
#include<iostream>
using namespace std;

// Ok, So what we are doing in this code is in the worst case.
// We are iterating over the entire array i.e for(int i = 0; i < n; i++) this array.
// The number of operations,the number of instructions that we are going to execute is going to be 
// proportional to the value of n, 
// The larger the value of n , the larger is time taken.
// And it is going to be linear function of n 
// So we can say this linear search has a complexity of order of n.
// ===========================
// No of operations  α  N.
// ===========================
// This is going to take O(N) Time..
// int arr[] = We have an array.
// int n = That denotes the size of array.
// int key = The value for which we are looking inside this particulararray.
int linear_search(int arr[], int n,int key)
{
  for(int i = 0; i < n; i++)                              // Here we iterate.
  {
    // check if the current element matches with key..
    if(arr[i] == key)
    {
      return i;
    }
  }
  // out of the loop..
  return -1;                                                  // If element is not foound in particular array then we write -1..
}

int main()
{
  int arr[] = {10,15,12,9,6,4,3,10,8};                      // declaration and initialization of array..
  int n = sizeof(arr)/sizeof(int);                          // 9 * 4 = 36 bytes , 36/4 = 9 elements in an array..

  int key;
  cin >> key;

  int index = linear_search(arr,n,key);
  if(index != -1)
  {
    cout << " is present at index " << index << endl;
  }
  else
  {
    cout << " is NOT Found! " << endl;
  }

  return 0;
}
