#include<iostream>
#include<iomanip>

int main()
{
  // std:: cout << " noboolalpha - default (10 == 10): " << (10 == 10) << std::endl;
  // std:: cout << " noboolalpha - default (10 == 20): " << (10 == 20) << std::endl;

  // // Set to True and False formatting
  // std::cout << std::boolalpha ;                                            // change to T / F.
  // std::cout << " boolalpha (10 == 10): " << (10 == 10) << std::endl;
  // std::cout << " boolalpha (10 == 20): " << (10 == 20) << std::endl;

  // // Setting still stays for future boolean insertions
  // std::cout << " boolalpha (10 == 10): " << (10 == 10) << std::endl;
  // std::cout << " boolalpha (10 == 20): " << (10 == 20) << std::endl;

  // // Toggle to 0 / 1:

  // std::cout << std::noboolalpha;
  // std::cout << " noboolalpha (10 == 10): " << (10 == 10) << std::endl;
  // std::cout << " noboolalpha (10 == 20): " << (10 == 20) << std::endl;

  // // Set back to true / false using setf method
  // std::cout.setf(std::ios::boolalpha);
  // std::cout << " boolalpha (10 == 10): " << (10 == 10) << std::endl;
  // std::cout << " boolalpha (10 == 20): " << (10 == 20) << std::endl;

  // // resets to default which 0/1
  // std::cout << std::resetiosflags(std::ios::boolalpha);
  // std::cout << " Default (10 == 10): " << (10 == 10) << std::endl;
  // std::cout << " Default (10 == 20): " << (10 == 20) << std::endl;
// ==================================================================================
  // Displaying Integer types:
  // int num {255};

  // std::cout << std :: dec << num << std::endl;
  // std::cout << std :: hex << num << std::endl;
  // std::cout << std :: oct << num << std::endl;
// ========================================================================================
  // Formatting integer types - display hex in uppercase

  // int num {255};

  // std::cout << std:: showbase << std:: uppercase;
  // std::cout << std:: hex << num << std::endl;               

  // output:

  // 0XFF                                                    // Note capitalized XFF
  // ==========================================================================================

  // formatting integer types - displaying the positive sign

  // int num1 {255};
  // int num2 {-255};

  // std::cout << num1 << std::endl;             // 255
  // std::cout << num2 << std::endl;             // -255

  // std::cout << std::showpos;

  // std::cout << num1 << std::endl;             // +255
  // std::cout << num2 << std::endl;             // -255

  // std::cout << std::noshowpos;

  // std::cout << num1 << std::endl;             // +255
  // std::cout << num2 << std::endl;             // -255



  // ================================================================================
// Notes just for my understanding :(Not a code practice.)
  // Setting/resetting integer types
  //  Set using setf
  //   std::cout.setf(std::ios::showbase);
  //   std::cout.setf(std::ios::uppercase);
  //   std::cout.setf(std::ios::showpos);

  // // Reset to defaults
  //   std::cout << std::resetiosflags(std::ios::basefield);
  //   std::cout << std::resetiosflags(std::ios::showbase);
  //   std::cout << std::resetiosflags(std::ios::showpos);
  //   std::cout << std::resetiosflags(std::ios::uppercase);

  // ================================================================================


// Displaying using different bases
// int num {255};
// std::cout << "\n----------------------------------------------------------" << std::endl;
// std::cout << std::dec << num << std::endl;                          // 255
// std::cout << std::oct << num << std::endl;                         //   377
// std::cout << std::hex << num << std::endl;                         // ff
// =========================================================================================
// Displaying showing the base prefix for hex and oct:
// std::cout << std::showbase;
// std::cout << std::dec << num << std::endl;                      // 255
// std::cout << std::hex << num << std::endl;                      // 0xff
// std::cout << std::oct << num << std::endl;                      // 0377
// ==========================================================================================
// Display the hex value in uppercase
// std::cout << "\n---------------------------------------------------------" << std::endl;
// std::cout << std::showbase ;
// std::cout << std::dec << num << std::endl;
// std::cout << std::oct << num << std::endl;
// std::cout << std::hex << num << std::endl;
// ========================================================================================
// Showpos method:
// std::cout << "\n---------------------------------------------------------" << std::endl;
// std::cout << std::showpos ;
// std::cout << std::dec << num << std::endl;
// std::cout << std::oct << num << std::endl;
// std::cout << std::hex << num << std::endl;
// ===========================================================================================
// setf method:
// std::cout.setf(std::ios::showbase);
// std::cout.setf(std::ios::uppercase);
// std::cout.setf(std::ios::showpos);
// ===============================================================================================

// std::cout << std::resetiosflags(std::ios::basefield);
// std::cout << std::resetiosflags(std::ios::showbase);
// std::cout << std::resetiosflags(std::ios::showpos);
// std::cout << std::resetiosflags(std::ios::uppercase);
// // ==============================================================================================

// std::cout << "\n============================================================================="<< std::endl;
// std::cout << " Enter an integer ";
// std::cin >> num;

// std::cout << " Hexadecimal : " << std::hex << num << std::endl;
// std::cout << " Hexadecimal : " << std::hex << std::uppercase << num << std::endl;
// std::cout << " Hexadecimal : " << std::hex << num << std::endl;
// std::cout << " Hexadecimal : " << std::hex << std::nouppercase << num << std::endl; 

// std::cout << " Octal       : " << std::oct << num << std::endl;
// std::cout << " Hexadecimal : " << std::hex << std::showbase << num << std:: endl;
// std::cout << " Octal       : " << std::oct << num << std::endl;

// std::cout << std::endl << std:: endl;
// return 0;

// ============================================================================================================



 

}