#include<iostream>
using namespace std;

class Solution{
  public:
  int getSum(int arr[],int n)
  {
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }
    return sum;

  }
};
int main()
{
  int t;
  cin>>t;
  
  
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    Solution ob;
    cout<<ob.getSum(arr,n)<<endl;
  }

  
}