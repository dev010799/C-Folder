#include<iostream>
using namespace std;

// int main()
// {
//   char c;
//   cout << " Enter a character " << endl;
//   cin >> c;

//   if(c == 'A'|| c == 'a' c == 'E'|| c == 'e' c == 'I'|| c == 'i' c == 'O'|| c == 'o' c == 'U'|| c == 'u')
//   {
//     cout << " Vowels " << endl;
//   }

//   else
//   {
//     cout << " Consonant " << endl;
//   }
//   return 0;
// }

// =============================================================
// using switch case

int main()
{
  char c;
  cout << "Enter a character" << endl;
  cin >> c;
  switch(c)
  {
    case 'a':
    cout << "Vowel";
    break;

    case 'A':
    cout << "Vowel";
    break;

    case 'e':
    cout << "Vowel";
    break;


    case 'E':
    cout << "Vowel";
    break;

    case 'i':
    cout << "Vowel";
    break;
    
    case 'I':
    cout << "Vowel";
    break;

    case 'o':
    cout << "Vowel";
    break;

    case 'O':
    cout << "Vowel";
    break;

    case 'u':
    cout << "Vowel";
    break;

    case 'U':
    cout << "Vowel";
    break;

    default:
    cout << "Consonant";
    break;




  }


}