#include<iostream>
using namespace std;

// int division(int a, int b)
// {

//   if (b == 0)
//       throw 1;
//   return a/b;
  
// }

// int main()
// {
//   int x = 10 , y = 2 , z;

//   try
//   {
//     {
//      z = division( x ,  y);
//      cout << z << endl; 
//     }
//   }
//   catch(int e)
//   {
//     cout << " Division by zero " << e << endl;
//   }

//   cout << " Bye " << endl;
  
// }

//


// ALL ABOUT THROW:
// class MyException: public exception                             // This is builtin class of c++..
// {


// };

// // It is useful in documentation and bigger projects.
// // If we dont want to function throw  anything then we can use throw()...i.e.throw empty bracket..
// // Otherwise we can use daatatype that can throw i.e. int,float,char,string ,className like MyException...etc..

// int division(int a,int b) throw()        
// {
//   if (b == 0)
//      throw 10;                                         // If it is throw integer type of value then we declare it as throw(int) in above prototype..
//   return a/b;
// }
// int main()

// {
//   int x = 10, y = 0, z;

//   try
//   {
//     {
//       if (y == 0)
//           //  throw 1.5;
//             throw MyException();
//                                  // We can throw anytype of value i.e. float,integer,string,double etc...
//       z = division(x,y);
//       cout << z << endl;
      

//     }
//   }
//   catch(MyException e )
//   {
//    cout << " Division by zero "  << endl;
//   }

//   cout << " Bye " << endl;
  
// }


// ALL ABOUT CATCH

// If we dont know the type of catch block then define (...) 3 dots in catch block..
// There is multiple catch blocks
// i.e. If exception of int type occurs then it goes to catch block 1.
// i.e. If exception of float type occurs then it goes to catch block 2
// i.e. If exception of char type occurs then it goes to catch block 3 ... i.e we unsderstand numberof datatype = number of catch blocks.
// catch(...) means catch All types... (... means Ellipse) (... 3dot it means any type of exception)
// But the good practice is to write multiple catch blocks.
// It means that writing multiple catch blocks means you are interested to give the message.
// catch(int) is good practice instead of this catch(...).

// Example for explanation:(try ans)

class MyException1 : exception
{

};
class MyException2 : public MyException1
{

};
int main()
{
  try
  {
    // throw 1.5;                           // If we enter float then goes to float catch block.
    // throw 1.5f;                         // If we enter double then goes to double catch block.
  //  throw  string(" My Name isDev ");    // If we enter string then goes to string catch block.
      // throw 'A';                           // Same for character type also.

      throw MyException1();



  }

  catch (int e)
  {
    cout << " Int catch " << endl;
  }

  catch (double e)
  {
    cout << " Double catch " << endl;
  }

  catch (string e)
  {
    cout << " String catch " << endl;
  }

  catch(char e)
  {
    cout << " Char catch " << endl;
  }
  
  // catch (...)                                // This is like universal catch block all types of datatype occurs in this catch...
  // {
  //   cout << " All catch " << endl;
  // }

  catch (MyException2 e)
  {
    cout << " Parent is Executed " << endl;
  }

  catch (MyException1 e)
  {
    cout << " Parent is Executed " << endl;
  }

}
