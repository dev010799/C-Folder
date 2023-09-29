#include<iostream>
using namespace std;

// Note: while writing pointer arithmetic dont write * .

// int main ()
// {
//   int A[5] {2,4,6,8,10};
//   int *p = A;                          // when p is pointing on first location then i get first beginning address of A.

//   cout << p << endl;

//   cout << *p << endl;
//   p++;                                   // This p++ increment the pointer and element move to next data..
//   cout << *p << endl;
//   p--;
//   cout << *p << endl;
//   // p--;
//   // cout << *p << endl

//   p = p + 3;                             // if p = p + 3 then ill get the address of 3 elements away...
//   cout << *p << endl;

//   p = p - 3;
//   cout << *p << endl;

//   cout << *(p + 2) << endl;
//   return 0;
// }

int main()
{
  int A[5]{2,4,6,8,10};

  // p is the first pointer..
  // q is the second pointer..
  // 4 gives number of elements and minus( - ) operator gives which operator comes first.. 
  int *p = A , *q = &A[4];

  cout << p - q << endl;             // Instead of p - q (p - q = -4 ) ill write q - p (q - p = 4)... 
  
  // cout << p << endl;
  // for (int i = 0; i < 5; i++)
  // {
  //   // cout << A[i] << endl;         // Instead of this i[A] is also used...          // This also works.
  //   // cout << i[A] << endl;        // Instead of this A[i] is also used...       // This also works.
  //   // cout << p[i] << endl;        // Instead of p[i] we can also use A[i].
  //     //  cout << *(A + i) << endl; // Instead of *(A + i) we can also use *(p + i)   // This also works...
  //     //  cout << A + i << endl;          // If we dont use the * then it will give the addresses...
  //     // So it means that insted of using array name in place of a array name i can use the pointer name.
  //     //  cout << p + i << endl;          // If we use p + i instead of A + i then we may also get same addresses..
  //         cout <<*(p + i) << endl;
  //         cout<< p++;
  // }

  // cout << p << endl;

  cout << endl;
  return 0;
}