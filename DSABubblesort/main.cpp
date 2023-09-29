#include<bits/stdc++.h>
using namespace std;

// void bubble_sort(int arr[],int n)
// {
//   for(int times = 1; times <= n - 1;times++)
//   {
//     // Do repeated swapping.
//     for(int j = 0; j <= n - times - 1; j++)
//     {
//       if(a[j] > a[j+1]){
//           swap(a[j],a[j + 1]);
//       }
//     }

//   }
// }

// int main()
// {
//   int arr[] = {-2,3,4,-1,5,-12,6,1,3};
//   int n = sizeof(arr)/sizeof(int);

//   bubble_sort(arr,n);

//   for(auto x:arr){
//     cout << arr << ",";
//   }

//   return 0;
// }
// ==================================================================
// Linear search: Time taken = O(N) complexity.
// Larger the value of N  , Larger the time taken.

// int linear_search(int arr[],int n,int key)
// {
//   for(int i = 0; i < n; i++)
//   {
//     if(arr[i] == key)
//     {
//       return i;
//     }
//   }

//   return -1;
// }

// int main()
// {
//   int arr[] = {10,20,30,40,50,60};
//   int n = sizeof(arr)/sizeof(n);

//   int key;
//   cin >> key;

//   int index = linear_search(arr,n,key);

//   if(index != -1)
//   {
//     cout << key <<  " Key is found " << index << endl;
//   }

//   else{
//     cout << key << " Key is not found " << endl;
//   }


// }
// ==============================================================
// Binary search:

// int binary_search(int arr[],int n,int key)
// {
//   int s = 0;  // for start.
//   int e = n - 1; // Last element minus 1.(index of the last element)

//   while(s <= e)
//   {
//     int mid = (s + e)/2

//     if(arr[mid] == key)
//     {
//        return mid;
//     }

//     else if(arr[mid] > s)
//     {
//       return ;
//     }

//     else 
//     {

//     }
    
//   }
//   return -1;

// }

// // How to find midpoint in binary search:
// // midpoint = (start + end)/2;

// int main()
// {
//   int arr = {10,20,30,40,50,60};
//   int n = sizeof(arr)/sizeof(int);      // 24/4 = 6 elements in  an array.

//   int key;
//   cin >> key;
  
//   binary_search(arr,n,key);

//   return 0;




// }

// Binary search:

// int binary_search(int arr[],int n,int key)
// {

//   int s = 0;
//   int e = n - 1;

//   for(int i = 0; i < n; i++)
//   {
//     int mid = (s + e)/2;
//     while(s <= e)
//     {
//       if(arr[mid] == key)
//       {
//         return mid;

//       }

//       else if(arr[mid] > key)
//       {
//         e = mid - 1;
//       }

//       else{
//         s = mid + 1;
//       }
//     }
//   }
//   return -1;
// }

// int main()
// {
//   int arr[] = {10,20,30,40,50,60};
//   int n = sizeof(arr)/sizeof(int);

//   int key;
//   cin >> key;

//   int index = binary_search(arr,n,key)

//   if(index != -1)
//   {
//     cout << key << " Key is found " << endl;
//   }

//   else
//   {
//     cout << key << " Key is not found " << endl;
//   }

//   return 0;


// }
// ================================================================

// void printAllPairs(int arr[],int n)
// {
//   for(int i = 0; i < n;i++)
//   int x = arr[i];
//   {
//     for(int j = j + 1; j < n; j++ ){
//     int y = arr[j];
    
//       cout << x << y << endl;

//     }

//     cout << endl;


    

//   }
  
// }

// int main()
// {
//   int arr = {10,20,30,40,50,60};
//   int n = sizeof(arr)/sizeof(int);

//   printAllPairs(arr,n);

  
//   return 0;
// }

// =====================================================

// int bubble_sort(int arr[],int n)
// {
//   for(int times=1;times<=n-1;times++)
//   {
//     // repeated swapping.
//     for(int j=0;j<=n-times-1;times++)
//     {
//       if(a[j] > a[j+1])
//       {
//         swap(arr[j],arr[j+1]);
//       }
//     }
//   }
// }

// ================================================
int Bubble_sort(int arr[],int n)
{
  for(int times = 1;times <= n-1;times++)
  {
    for(int j=1;j<=n-times-1;j++)
    {
      if(arr[j] > arr[j+1])
      {
        swap(arr[j],arr[j+1]);
      }
    }
  }
}


