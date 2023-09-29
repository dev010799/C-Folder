#include<iostream>
using namespace std;

// void print_array(int numbers [],size_t size);

// int main()
// {
//   int my_numbers[] {1,2,3,4,5};
//   print_array(my_numbers,5);                     // 1 2 3 4 5
//   return 0;

// }

// void print_array(int numbers [],size_t size){

//   for(size_t i{0}; i < size; i++)
//   cout << numbers[i] << endl;


// }
// Example 2(Pass By Reference):
// int main () {
//    // declare simple variables
//    int    i;
//    double d;
 
//    // declare reference variables
//    int&    r = i;
//    double& s = d;
   
//    i = 5;
//    cout << "Value of i : " << i << endl;
//    cout << "Value of i reference : " << r  << endl;
 
//    d = 11.7;
//    cout << "Value of d : " << d << endl;
//    cout << "Value of d reference : " << s  << endl;
   
//    return 0;
// }

// void swap(int &a, int &b);

// void swap(int&a , int&b)
// {
//   int temp = a;
//   a = b;
//   b = a;
// }

// int main()
// {
//   int x{10}, y{20};
//   cout << x << " " << y << endl;
//   swap(x,y);
//   cout << x << " " << y << endl;
// }

// void pass_by_reference1(int &num);
// void pass_by_reference2(string &s);

// const int MAX = 3;

// int main () {
//    int  var[MAX] = {10, 100, 200};
//    int  *ptr;

//    // let us have array address in pointer.
//    ptr = var;
   
//    for (int i = 0; i < MAX; i++) {
//       cout << "Address of var[" << i << "] = ";
//       cout << ptr << endl;

//       cout << "Value of var[" << i << "] = ";
//       cout << *ptr << endl;

//       // point to the next location
//       ptr++;
//    }
   
//    return 0;
// }

// const int MAX = 3;

// int main () {
//    int  var[MAX] = {10, 100, 200};
//    int  *ptr;

//    // let us have address of the last element in pointer.
//    ptr = &var[MAX-1];
   
//    for (int i = MAX; i > 0; i--) {
//       cout << "Address of var[" << i << "] = ";
//       cout << ptr << endl;

//       cout << "Value of var[" << i << "] = ";
//       cout << *ptr << endl;

//       // point to the previous location
//       ptr--;
//    }
   
//    return 0;
// }

const int MAX = 3;

int main () {
   int  var[MAX] = {10, 100, 200};
   int  *ptr;

   // let us have address of the first element in pointer.
   ptr = var;
   int i = 0;
   
   while ( ptr <= &var[MAX - 1] ) {
      cout << "Address of var[" << i << "] = ";
      cout << ptr << endl;

      cout << "Value of var[" << i << "] = ";
      cout << *ptr << endl;

      // point to the previous location
      ptr++;
      i++;
   }
   
   return 0;
}
