#include<iostream>
using namespace std;

// class Solution
// {
//   public:
//   string isVowel(char c)
//   {
//     switch(c)
//     {
//       case 'a':
//       cout<<"Vowel";
//       break;

//       case 'e':
//       cout<<"Vowel";
//       break;

//       case 'i':
//       cout<<"Vowel";
//       break;

//       case 'o':
//       cout<<"Vowel";
//       break;

//       case 'u':
//       cout<<"Vowel";
//       break;

//        case 'A':
//       cout<<"Vowel";
//       break;

//       case 'E':
//       cout<<"Vowel";
//       break;

//       case 'I':
//       cout<<"Vowel";
//       break;

//       case 'O':
//       cout<<"Vowel";
//       break;

//       case 'U':
//       cout<<"Vowel";
//       break;

//       default:
//       cout<<"Not a Vowel";
//       break;
//     }
//   }
// };

// int main()
// {
//   char t;
//   cin>>t;

//   while(t--)
//   {
//     char c;
//     cin>>c;
//     Solution ob;
//     cout<< ob.isVowel(c);
//   }
//   return 0;

// }

// ===================================================
// 2nd scenario(concise code) to print vowels:

class Solution
{
  public:
  string isVowel(char c)
  {
    switch(c)
    {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        return"YES";
      default:
        return "NO"; 
    }
  }
};

int main()
{
  char t;
  cin>>t;

  while(t--)
  {
    char c;
    cin>>c;
    Solution ob;
    cout<< ob.isVowel(c);
  }
  return 0;
}
