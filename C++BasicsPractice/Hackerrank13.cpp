// Inherited code:
#include<iostream>
using namespace std;


// bool checkUsername(string username)
// {
//   bool isValid = true;
//   int n=username.length();

//   if(n<5)
//   {
//     throw BadlengthException(n);
//   }
//   for(int i=0;i<n-1;i++)
//   {
//     if(username[i] == 'w' && username[i+1] == 'w')
//     {
//       isValid = false;
//     }
//   }
//   return isValid;
// }

// int main()
// {
//   int t;
//   cin>>t;

//   while(t--)
//   {
//     string username;
//     cin>>username;

//     try{
//       bool isvalid = checkUsername(username);
//       if(isValid)
//       {
//         cout<<"Valid" <<'\n';
//       }
//       else
//       {
//         cout<<"Invalid"<<'\n';
//       }
//     } catch(BadLengthException e)
//     {
//       cout<< "Too short: "<<e.what()<<'\n';

//     }
//   }
//   return 0;
// }