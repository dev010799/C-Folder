// Arrays & functions (Pass by reference)
#include<iostream>
using namespace std;

void printArray(int *arr)
{
  cout << " In Function " << sizeof(arr) << endl;
  arr[0] = 100;

  // for(int i = 0; i < n; i++)
  // {
  //   cout << arr[i];
  // }
  
}
int main()
{
  // How much memory it should take this is going to take 6 * 4 = 24 bytes..
  // And each element is of type int...
  int arr[] = {1,2,3,4,5,6}; 
  int n = sizeof(arr)/ sizeof(int);     // 24/4 = 6 elements in a particular array.. 

  cout << " In Main " << sizeof(arr) << endl;
  printArray(arr);

  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}