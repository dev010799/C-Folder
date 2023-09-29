#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


//  vector<int> subarraySum(vector<int>arr, int n, long long s)
//     {
//         // Your code here
//         int sum = 0;
//         int i=0;
//         int j=0;
        
//         while(i<=j && j<=n){
            
//             if(s == 0){
//                 return {-1};
//             }
//             if(sum>s){
//                 sum -= arr[i++];
//             }
//             if(sum<s){
//                 sum += arr[j++];
//             }
//             if(sum == s){
//                 return {i+1,j};
//                 break;
//             }
//         }
//         return {-1};
//     }
// };

// int MissingNumber(vector<int> &arr, int n) {
//     int k = 1;
//     std::sort(arr.begin(), arr.end());

//     if(n == 1) {
//         return 1;
//     }

//     for(int i {0}; i < n; i++) {
//         if(arr[i] != i + 1) {
//             return i + 1;
//         }
//     }
// };

int min_Jumps(int arr[], int n) {
    int jump = 0;
    int pos = 0;
    int mx = 0;

    for(int i {0}; i < n; i++) {
        mx = max(mx, i + arr[i]);

        if(i == pos) {
            pos = mx;
            jump++;
        }

        if(pos >= n - 1) 
        return jump;
    }
    return -1;
}

