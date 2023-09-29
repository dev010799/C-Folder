#include <iostream>
#include <vector>
using namespace std;

int main (){
  // for (int i{1}; i<=10; i+=2){
  //   cout << i << endl;
  // }

  // for(int i{10}; i>0 ; --i){
  //   cout << i << endl;
  // }

  //  for(int i{10}; i>0 ; --i)
  //   cout << i << endl;
  // cout << "Blastoff!" << endl;                                /* This is for our understanding purpose i.e. loop ends.. or stops  */ 
  

  // for(int i{10}; i <= 100; i+=9)
  // {
  //   //  cout << i << endl;
  //    if(i % 15 == 0)
  //    cout << i << endl;
      
  // }

  // for (int i{1},j{7}; i <= 7 ; ++i, ++j)
  
  // cout << i << " + " << j << " = " <<  (i + j) << endl;

  // for (int i{1}, j{2}, k{3},l{4}; i <= 4 ; ++i, ++j, ++k,++l){
  //   cout << i << " + " << j << " + " << k << " + " << l << " = " << (i + j + k + l) << endl;
  // }

  // for (int i{1}; i <= 100 ; i++){
  //   cout << i;
  //   if (i % 10 == 0)
  //   cout << endl;
  //   else 
  //   cout << " ";

  // }

  // for (int i{1}; i <= 100 ; i++){
  //   cout << i;
  //   if (i % 9 == 0)
  //   cout << endl;
  //   else 
  //   cout << " ";

  // }


  // USING TERNARY OPERATOR:

  // for (int i{1}; i <= 100 ; i++){
  //  cout << i;
  //  cout << ((i % 10 == 0) ? " \n " : " ");

  // }
  
  //  or we can write in a single line:

  // for (int i{1}; i <= 100 ; i++){
  //  cout << i << ((i % 10 == 0) ? " \n " : " ");

  // }

  vector <int> nums{10,20,30,40,50};
  for (unsigned i{0}; i < nums.size(); ++i)
  cout << nums[i] << endl;
 

  cout << endl;
  return 0;
}