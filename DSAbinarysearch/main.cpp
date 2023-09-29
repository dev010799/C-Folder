// Binary search Algorithm code:
#include<iostream>
using namespace std;

int binary_search(int arr[],int n, int key)
{
  // Implement binary search
  int s = 0;                     // start.                      
  int e = n - 1;                 // end.               // n - 1 is the index of the last element..

  while(s<=e)
  {

    int mid = (s + e)/2;
    if(arr[mid] == key)
    {
      return mid;
    }

    else if(arr[mid] > key)
    {
      e = mid - 1;
    }

    else
    {

      s = mid + 1;

    }

  }

  return -1;                   // if element is not present in an array.
 
}

int main()
{
  int arr[] = {10,20,30,40,45,60,70,89};          // All the values are in increasing order..
  int n = sizeof(arr)/sizeof(int);

  int key;
  cin>>key;

  int index = binary_search(arr,n,key);
  if(index != -1)
  {
    cout << " is present at index " << index << endl;
  }

  else
  {
    cout << " is NOT FOUND! " << endl;

  }

  return 0;

}