#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//   int n;

//   cout << " Enter positive  integers ";
//   cin >> n;

//   for(int i = 1;i<=10;i++)
//   {
//     cout << n << " * " << i << " = " <<  n * i << endl;
//   }

//   return 0;

  
  
// }

// void reverse(int arr[],int n)
// {
  
// }

bool compare()
{
  return a > b;
}

int main()
{
 vector<int> arr{1,7,5,4,6,12};
 
 for(auto x:arr)
 {
  cout << x ;
 }

 sort(arr.rbegin(),arr.rend(),compare);

 cout << " Sorted in descending order " << endl;
 for(int i = 0;i < arr.size();i++ )
 {
  cout << arr[i] << endl;
 }

 return 0;


  

  
}