#include<bits/stdc++.h>
using namespace std;

// void insertion_sort(int arr[],int n)
// {
//   for(int i = 1; i <= n - 1; i++)
//   {
//     int current = arr[i];               // element of array
//     int prev = i - 1;

//     while(prev >= 0 and a[prev] > current)
//     {
//       arr[prev + 1] = arr[prev];
//       prev = prev - 1;
//     }
//   }

// }

// int main()
// {
//   int arr[] = {-2,3,4,-1,5,-12,6,1,3}
//   int n = sizeof(arr)/sizeof(int);
//   insertion_sort(arr,n);

//   for(auto x: arr)
//   {
//     cout << x << ",";
//   }
// }

//=================================================
void insertion_sort(int arr[],int n)
{
  for(int i = 1; i < n-1; i++)
  {
    int current = arr[i];
    int prev = i - 1;

    while(prev >= 0 and arr[prev] > current)
    {
      arr[prev+1] = arr[prev];
      prev = prev - 1;
    }

  }

}

int main()
{
  int arr[] = {-2,3,4,-1,5,-12,6,1,3};
  int n = sizeof(arr)/sizeof(int);
  insertion_sort(arr,n);

  for (auto x:arr)
  {
    cout << x;
  }
}