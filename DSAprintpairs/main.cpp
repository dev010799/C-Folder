// Problem: Print All pairs of elements..
// #include<iostream>
// using namespace std;

// // Print All the elements:
// // Here we use 2 nested loops..
// void printAllPairs(int arr[],int n)
// {
//   for(int i = 0; i < n; i++)
//   {
//     int x = arr[i];
//       for(int j = i+1; j < n; j++)                // if we initialize j = 0 then we may get more combinations.. i.e. ith element will form pairs with previous.
//       {
//         int y = arr[j];

//         cout << x << "," << y << endl;
//       }
//       cout << endl;
//   }


// }

// int main()
// {
//   int arr[] = {10,20,30,40,50,60};
//   int n = sizeof(arr)/sizeof(int);

//   printAllPairs(arr,n);

//   return 0;
// }

// ======================================================
// #include<bits/stdc++.h>
// using namespace std;

// void printAllPairs(int arr[],int n)
// {
//   for(i=0;i<n;i++)
  
//   {
//     int x = arr[i];
//     for(j = i+1;j<n;j++)              // if j = 0 it shows all possible pairs i.e(1,1),(1,2),(1,3),(1,4).
    
//     {
//       int y = arr[j];
//       cout << x << "," << y << endl;

//     }

//     cout << endl;

//   }
// }

// int main()
// {
//   int arr[] = {10,20,30,40,50,60};
//   int n = sizeof(arr)/sizeof(int);

//   printAllPairs(arr,n);
// }

//============================================================

// #include<bits/stdc++.h>
// using namespace std;
// void printAllPairs(int arr[],int n)
// {
//   for(int i=0;i<n;i++)
//   {
//     int x = arr[i];
//     for(int j=i+1;j<n;j++)
//     {
//       int y = arr[j];

//       cout << x << "," << y << endl;
//     }
//   }
//   cout << endl;

// }
// int main()
// {
//   int arr[] = {10,20,30,40,50,60};
//   int n = sizeof(arr)/sizeof(int);

//   printAllPairs(arr,n);

// }

