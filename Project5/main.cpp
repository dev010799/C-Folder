#include <iostream>
#include <climits>
#include <cfloat>  //make sure you include climits for integer types.
using namespace std;

int main(){
  cout << "sizeof information" << endl;
  cout << "int:" << sizeof(int) << "bytes." << endl;
  cout << "unsigned int" << sizeof(unsigned int) << " bytes " << endl;
  cout << " short " << sizeof(short) << " bytes " << endl;
  cout << " long long " << sizeof(long long) << " bytes " << endl;
  cout << "double:" << sizeof(double) << "bytes" << endl;
  cout << "char:" << sizeof(char) << "bytes" << endl;
  cout << "float:" << sizeof(float) << " bytes " << endl;
  cout << "float double:" << sizeof(double) << " bytes " << endl;
  cout << "long double:" << sizeof(long double) << " bytes " << endl;

  cout << "sizeof using variables names" <<endl;
  int age{21};
  cout << "age is" << sizeof (age) << "bytes" << endl;


  float value{22.3};
  cout << "value is" << sizeof (value) << " bytes " << endl;

   double wage{22.3};
  cout << "wage is" << sizeof (wage) << " bytes " << endl;
}