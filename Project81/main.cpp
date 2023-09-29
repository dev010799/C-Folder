#include<iostream>
using namespace std;

// int main()
// {
//   int *int_ptr{nullptr};
//   int_ptr = new int;
//   cout << int_ptr << endl;
//   delete int_ptr;

//   size_t size{0};
//   double *temp_ptr{nullptr};

//   cout << " How many temps? ";
//   cin >> size;

//  while(true)
//   temp_ptr = new double[size];
//   cout << temp_ptr << endl;
//   delete [] temp_ptr;

//   cout << endl;
//   return 0;
// }

// =================================================================

// int main()
// {
//   int scores[] {100,95,89};

// cout << scores << endl;                         // Address
// cout << *scores << endl;                        // 100

// int *score_ptr {scores};
// cout << score_ptr << endl;                      // Address
// cout << *score_ptr << endl;                     // 100
// }

// ==================================================================

// int main()
// {
//   int scores[] {100,95,89};
//   int *score_ptr {scores};

//   cout << score_ptr[0] << endl;
//   cout << score_ptr[1] << endl;
//   cout << score_ptr[2] << endl;
// }

// =====================================================================

// int main()
// {
//   int scores[] {100,95,89};

// int *score_ptr{scores};

// cout << score_ptr << endl;  
// // When we adding 1 we are adding the address of the next integer which is 4 bytes away.                   
// cout << (score_ptr + 1) << endl;   
// // when we adding 2 we increment score pointer by 8 which is 2 integers away..               
// cout << (score_ptr + 2) << endl;
// }

// =======================================================================

// Dereferencing expression :

// int main()
// {
//   int scores[] {100,95,89};
//   int *score_ptr {scores};

//   cout << *score_ptr << endl;
//   cout << *(score_ptr + 1) << endl;
//   cout << *(score_ptr + 2) <<
// }

// ========================================================================

// int main()
// {
//   int scores[] {100,95,89};
//   cout << " Values of scores " << scores << endl;

//   int *score_ptr{scores};

//   cout << " \nArray subscript notation ------------------------------------ " << endl;
//   cout << scores[0] << endl;
//   cout << scores[1] << endl;
//   cout << scores[2] << endl;

//   cout << " \n Pointer subscript notation ---------------------------------- " << endl;
//   cout <<  *score_ptr  << endl;
//   cout << *(score_ptr + 1) << endl;                                                        // Dereferencing ...
//   cout << *(score_ptr + 2) << endl;


//   cout << " \n ----------------------------------------------------------------------" << endl;
//   cout << *scores << endl;
//   cout << *(scores + 1) << endl;
//   cout << *(scores + 2) << endl;


//   cout << endl;
//   return 0;

// }
// =====================================================================================================

int main()
{
  // int scores [] {100,95,89,68,-1};
  // int *score_ptr {scores};

  // while(*score_ptr != -1)                            // In this case we dont display -1 because this value is our sentinel value...
  // {
  //   cout << *score_ptr << endl;
  //   score_ptr ++ ;

  // }
// ===================================================================================
  // while(*score_ptr != -1)                            
  
  //   cout << *score_ptr++ << endl;
  // =================================================================================

//   cout << " \n ================================================================ " << endl;
//   string s1{" Frank "};
//   string s2{" Frank "};
//   string s3{" James "};

//   string *p1 {&s1};
//   string *p2 {&s2};
//   string *p3 {&s1};

//   cout << boolalpha;
//   cout << p1 << " == " << p2 << " : " << (p1 == p2) << endl;         // False
//   cout << p1 << " == " << p3 << " : " << (p1 == p3) << endl;         // True

//   cout << *p1 << " == " << *p2 << " : " << (*p1 == *p2) << endl;     // True
//   cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;     // True

//   p3 = &s3;                     // Point to James..
//   cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;     // False

// cout << " \n =================================================================== " << endl;
// char name[] {" Frank "};

// char *char_ptr1{nullptr};
// char *char_ptr2{nullptr};

// char_ptr1 = &name[0]; // F
// char_ptr2 = &name[3]; // n

// cout << " In the string " << name << " ," << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;

// cout << endl;
// return 0;

// RETURNING A POINTER FROM A FUNCTION:

//  int main ()
//  {
//   int a{100};
//   int b{200};

//   int *largest_ptr{nullptr};
//   largest_ptr = largest_int(&a,&b);
//   cout << *largest_ptr << endl;   // 200

//   cout << endl;
//   return 0;
//  }




    

  

  cout << endl;
  return 0;
}
