#include<iostream>
using namespace std;
/*
int main()
{
  int num (9);

  cout << num << endl;
  return 0;
}

variables declaration:

int main()
{
  

  cout << "Enter the width of the room: " << endl;
  int room_width (0);
  cin >> room_width;

  cout << "Enter the length of the room: " << endl;
  int room_length (0);
  cin >> room_length;

  int result;
  result = room_length + room_width;
  cout << result << " Result of length and width of the room: " << endl; 
  cout << "The area of the room is: " << room_width * room_length << endl;

  return 0;

}

*/

// Global Variables:

// first looks locally.
// i.e. it Prints 16 which is inside the main function.
/*
int age = 20;
int main()
{
  int age = 14;
  cout << age << endl;
  return 0;
}
*/

// #include <iostream>
// #include <cmath>

//  // the calculator >:)


// int main() {

//     int choice;
//     double num1, num2, sum;
//     char operation;

//     std::cout << "+x+x+x Calculator +x+x+x" << '\n';

//     std::cout << "Choose your operation (+ - * /): ";
//     std::cin >> operation;

//     std::cout << "Enter your first #: ";
//     std::cin >> num1;

//     std::cout << "Enter your second #: ";
//     std::cin >> num2;

//     switch (operation){
//         case '+':
//             std::cout << "Result: " << num1 + num2 << '\n';
//             break;
//         case '-':
//             std::cout << "Result: " << num1 - num2 << '\n';
//             break;
//         case '*':
//             std::cout << "Result: " << num1 * num2 << '\n';
//             break;
//         case '/':
//             if(num2 != 0){
//                 std::cout << "Result: " << static_cast<float>(num1) / num2 << '\n';
//             } else{
//                 std::cout << "ERR0R: Division by 0 is not allowed >:(";
//             }
//             break;
//         default:
//             std::cout << "ERR0R: Invalid Operation!" << '\n';
//             break;
//     }
//     return 0;
// }
// ============================================================================

#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "What car would you like to rent?" << endl;
    cout << "1-2018 Honda Civic" << endl;
    cout << "2-2019 Nissan Maxima" << endl;
    cout << "3-2013 Chevy Traverse" << endl;
    cin >> a;
    if (a == 1) {
        double hondacivic;
        cout << "How many months would you like to rent this car for?" << endl;
        cin >> hondacivic;
        double hondacivicprice = hondacivic * 1400;
        cout << "For " << hondacivic << " months it will cost $" << hondacivicprice << endl;
    }
    else if (a == 2) {
        double nissanmaxima;
        cout << "How many months would you like to rent this car for?" << endl;
        cin >> nissanmaxima;
        double nissanmaximaprice = nissanmaxima * 1700;
        cout << "For " << nissanmaxima << " months it will cost $" << nissanmaximaprice << endl;
    }
    else if (a == 3) {
        double chevytraverse;
        cout << "How many months would you like to rent this car for?" << endl;
        cin >> chevytraverse;
        double chevytraverseprice = chevytraverse * 1100;
        cout << "For " << chevytraverse << " months it will cost $" << chevytraverseprice << endl;
    }
}