#include<iostream>
#include<iomanip>
// Streaming manipulators - Floating point:
int main()
{
//   double num1{123456789.987654321};
//   double num2{1234.5678};
//   double num3{1234.0};

//   // using default settings
//   std::cout << " =========== Defaults ===========================================" << std::endl;
//   std::cout << num1 << std::endl;               // 1.23457e+08
//   std::cout << num2 << std::endl;               // 1234.57
//   std::cout << num3 << std::endl;               // 1234

//   // ===========================================================================================
// // Note: How since we can't display in precision 2 scientific notation is used:
//   std::cout << std::setprecision(2);
//   // std::cout << "=========\n Precision (2)======================================================" << std::endl;
//   std::cout << num1 << std::endl;
//   std::cout << num2 << std::endl;
//   std::cout << num3 << std::endl;
// =============================================================================================================

// double num{1234.5678};

// // Note: Precision is 6 and rounding..

// std::cout << num << std::endl;                         // output is 1234.57

// ==============================================================================================================

// double num{123456789.987654321};

// std::cout << num << std:: endl;                // Notice Precision is 6. // O/p is 1.23457e+08

// ==============================================================================================================

// double num{123456789.987654321};

// std::cout << std::setprecision(9);
// std::cout << num << std::endl;

// will display                     o/p       123456790          // Note that rounding occurs.
// ==============================================================================================================

// double num {123456789.987654321};

// std::cout << std::fixed;
// std::cout << num << std::endl;

// // will display precision 6 from the decimal

// // 123456789.987654
// ===============================================================================================================

// double num {123456789.987654321};

// std::cout << std::setprecision(3) << std::fixed;
// std::cout << num << std:: endl;

// // Will display precision 3 from the decimal

// // 123456789.988

// ===============================================================================================================

// double num{123456789.987654321};

// std::cout << std::setprecision(3) << std::scientific;
// std::cout << num << std::endl;

// will display precision 3
// 1.23e+008
// ================================================================================================================

// double num{123456789.987654321};

// std::cout << std::setprecision(3)
//           << std::scientific
//           << std::uppercase;
// std::cout << num << std:: endl;

// // will display precision 3
// // 1.23E+008                                  // Note the capital ' E '

// ================================================================================================================

// double num{123456789.987654321};

// std::cout << std::setprecision(3) 
//           << fixed 
//           << std::showpos;

// std::cout << num << std::endl;
// // Will display

// +123456789.988                     // Note the leading '+'
// =================================================================================================================

// Formatting floating point types - trailing Zeroes

// double num {12.34};

// std::cout << num << std::endl;

// std::cout << std::showpoint;                     // 12.34

// std::cout << num << std::endl;                  //  12.3400

// will display

// 12.34       // Note no trailing zerroes(default)
// 12.3400     // Note Trailing zeroes upto precision

// ==================================================================================================================

// Returning to general settings:

// 1. unsetf

// std::cout.unsetf(std::ios::scientific | std::ios::fixed);

// // 

// std::cout << std::resetiosflags(std::ios::floatfield);

// // Refer to the docs for other set / reset flags

// ==================================================================================================================

// double num1 {123456789.987654321};
// double num2 {1234.5678};
// double num3 {1234.0};

// // Using default settings
// std::cout << " ---------------------------------Defaults ---------------------------------------------------- " << std::endl;
// std::cout << num1 << std::endl;
// std::cout << num2 << std::endl;
// std::cout << num3 << std::endl;

// // Note how since we can't display in precision 2 scientific notation is used
// std::cout << std::setprecision(2);
// std::cout << num1 << std::endl;
// std::cout << num2 << std::endl;
// std::cout << num3 << std::endl;

// // using  precision 5                                                    
// std::cout << std::setprecision(5);
// std::cout << num1 << std::endl;
// std::cout << num2 << std::endl;
// std::cout << num3 << std::endl;

// // Using precision 9
// std::cout << std::setprecision(9);
// std::cout << " -----------------precision 9----------------";
// std::cout << num1 << std::endl;
// std::cout << num2 << std::endl;
// std::cout << num3 << std::endl;

// // Using precision and fixed:
// std::cout << " Use precision 3 and fixed " << std::endl  << std::endl;
// std::cout << std::setprecision(3) << std::fixed;
// std::cout << num1 << std::endl;
// std::cout << num2 << std::endl;
// std::cout << num3 << std::endl;

// // ======================================================================
// // Using precision 3 fixed and scientific notation
// // Note precision is after the decimal
// std::cout << std::setprecision(3) << std::scientific;
// std::cout << " ------------precision 3 scientific ----------------------- " << std::endl;
// std::cout << num1 << std::endl;
// std::cout << num2 << std::endl;
// std::cout << num3 << std::endl;

// // ======================================================================

// // Back to defaults:
// std::cout.unsetf(std::ios::scientific | std::ios::fixed);
// std::cout << std::setprecision(6);
// std::cout << std::resetiosflags(std::ios::showpos);
// std::cout << std::resetiosflags(std::ios::showpoint);

// =========================================================================

// Field width , align and fill:

// Default when displaying floating point values is:
// 1.setw - not set by default.
// 2.left - when no field width,right - when using field width.
// 3.fill - not set by default - blank space is used.

// Some of these manipulators affect only the next data element put on the stream..
// ============================================================================

// // Defaults:
// double num {1234.5678};
// std::string hello{"hello"};

// std::cout << num << hello << std::endl;                // o/p 1234.57Hello

// std::cout << num << std::endl;                         // 1234.56
// std::cout << hello << std::endl;                       // hello

// =============================================================================

// Field width - setw

// double num {1234.5678};
// std::string hello{" Hello "};

// std::cout << std::setw(10) << num << hello << std::endl; 

// Will Display()
// 1234567890123456789012345678901234567890

// 1234.57Hello 

// ===============================================================================

// double num{1234.5678};
// std::string hello{"Hello"};

// std::cout << std::setfill (' - ');
// std::cout << std::std::setw(10) << num;
//           << hello << std::endl;























}