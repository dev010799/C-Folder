#include<iostream>
// #include<iomanip>
// #include<string>

using namespace std;

int main(){
//   string s0;
//   string s1{"Apple"};
//   string s2{"Banana"};
//   string s3{"Kiwi"};
//   string s4{"apple"};
//   string s5{s1};       /* Apple */
//   string s6{s1,0,3};   /* App */
//   string s7(10,'X');   /* XXXXXXXXXX */

  // cout << s0 << endl;             /* No Garbage */
  // cout << s0.length() << endl;    /* empty string */
  
  // Initialization 

  // cout << "\nInitialization" << " \n----------------------------------- " << endl;
  // cout << " s1 is initialized to: " << s1 << endl;
  // cout << " s2 is initialized to: " << s2 << endl;
  // cout << " s3 is initialized to: " << s3 << endl;
  // cout << " s4 is initialized to: " << s4 << endl;
  // cout << " s5 is initialized to: " << s5 << endl;
  // cout << " s6 is initialized to: " << s6 << endl;
  // cout << " s7 is initialized to: " << s7 << endl;

  // Comparison :

  // cout << "\n Comparison" << " \n ---------------------------------------------- " << endl;
  // cout << boolalpha;

  // cout << s1 << " == " << s5 << " : " << (s1 == s5) << endl;    /*True*   Apple == Apple */
  // cout << s1 << " == " << s2 << " : " << (s1 == s2) << endl;    /*False   Apple != Banana */
  // cout << s1 << " == " << s2 << " : " << (s1 == s5) << endl;    /*True    Apple != Banana */  
  // cout << s1 << " == " << s2 << " : " << (s1 == s2) << endl;     /*True   Apple < Banana */
  // cout << s2 << " == " << s1 << " : " << (s1 == s5) << endl;      /*True  Banana < Apple*/
  // cout << s4 << " == " << s5 << " : " << (s1 == s2) << endl;      /*False apple > Apple*/  
  // cout << s1 << " == " << " Apple " << " : " << (s1 == "Apple") << endl;  /* True   Apple == Apple */

  // cout << "\n Assignment " << "\n ------------------------------------- " << endl;

  // s1 = " Watermelon ";
  // cout << " s1 is now: " << s1 << endl;  // Watermelon
  

  // s2 = s1;
  // cout << " s2 is now: " << s2 << endl; // Watermelon

  // s3 = " Frank ";
  // cout << " s3 is now: " << s3 << endl; // Frank

  // s3[0] = 'C'; //Crank
  // cout << " s3 change first letter to 'C':" << s3 << endl;  // Crank
  // s3.at(0) = 'P';
  // cout << " s3 change first letter to 'P':" << s3 << endl;  // Prank

  // // Concatenation 
  // s3 = " Watermelon ";
  // cout << "\n Concatenation " << "\n-----------------------------------" << endl;

  // s3 = s5 + " and " + s2 + " juice "; // Apple and Banana juice
  // cout << " s3 is now: " << s3 << endl; // Apple and Banana juice

  // s3 = " nice " + " cold " + s5 + " juice ";  // ompiler error

  // // for loop 
  // cout << " \n Looping " << " \n -------------------------------------- " << endl;
  // s1 = "Apple";
  // for (size_t i{0}; i < s1.length(); ++i)
  //   cout << s1.at(i);
  // cout << endl;

  // // Range based for loop:

  // for ( char c:s1)
  //   cout << c;
  // cout << endl;

  // Substring:

  // cout << "\n Substring" << "\n ------------------------------- " << endl;
  // s1 = " This is a test ";
  // cout << s1.substr(0,4) << endl;
  // cout << s1.substr(3,9) << endl;
  // cout << s1.substr(8,11) << endl;


  // Erase:

  // cout << "\n Substring" << "\n ---------------------------------------" << endl;

  // s1 = " This is a test ";
  // s1.erase(0,5);
  // cout << " s1 is now: " << s1 << endl;

  // getline 
  // cout << "\ngetline" << "\n ------------------------------------------------- " << endl;

  // string full_name{};

  // cout << " Enter your full name: ";
  // getline(cin,full_name);

  // cout << " Your full name is -  " << full_name << endl;

  // Find
    //  cout << "\nfind << " " \n ---------------------------------" << endl;

    //  s1 = " The secret word is BOO ";
    //  string word{};

    //  cout << " Enter the word to find: ";
    //  cin >> word;

    //  size_t position = s1.find(word);
    //  if(position != string::npos)
    //   cout << " Found " << word << " at position: " << position << endl;
    //  else
    //   cout << " Sorry " << word << " not found " << endl;
    

    // Coding challenge:

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAfghijklmnopqrsabcdefwxy"};

    string secret_message{};
    cout << " Enter your secret message: ";
    getline(cin,secret_message);

    string encrypted_message{};
    cout << " \nEncrypting message " << endl;

    for(char c: secret_message){
      size_t position = alphabet.find(c);
      if(position != string::npos){
        char new_char { key.at(position)};
        encrypted_messaage += new_char;


      }else{
        encrypted_message += c;

      }

       cout << "\n Encrypted message:" << encrypted_message << endl; 

      string decrypted_message {};
      cout << " \n Decrypting message... " << endl;

      for(char c:encrypted_message){
        size_t position = key.find(c);
        if(position != string::npos){
          decrypted_message += new_char;
        }else{
          decrypted_message += c;
        }
      }
      cout << "\n Decrypted message:" << decrypted_message << endl; 
    }

    // cout << "\n Encrypted message:" << encrypted_message << endl; 
 

    // cout << " Enter your secret message: " << endl; 
  


  







  cout << endl;
  return 0;

  

}