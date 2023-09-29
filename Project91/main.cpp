#include<iostream>
#include<vector>
#include<string>
#include<set>

// using while loop:
// int main()
// {
//   std::vector<int> vec{1,2,3};
//   std::vector<int>::iterator it = vec.begin();

//   while (it != vec.end())
//   {
//     std::cout << *it << " ";
//     ++it;
//   }
// }

// Expected output: // 1 2 3

// =================================================================

// Using for loop:

// int main()
// {
//   std::vector<int> vec{1,2,3};
//   for(auto it = vec.begin(); it != vec.end(); it++)
//   {
//     std::cout << *it << " ";
//   }

// }

// Expected output // 1 2 3
// ==================================================================

// For sets:

// int main()
// {
//   std::set<char> suits {'C', 'H', 'S', 'D'};

//   auto it = suits.begin();

//   while(it != suits.end())
//   {
//     std::cout << *it << " " << std::endl;
//     ++it;
//   }
// }

// using for loop:
// int main()
// {
//   std::set<char> suits{'C','H','S','D'};

//   for(auto it = suits.begin(); it != suits.end(); it++)
//   {
//     std::cout << *it << std::endl;
//   }

// }

// =================================================================
// Reverse the iterator:

// int main()
// {
// std::vector<int> vec{1,2,3};
// std::vector<int>::reverse_iterator it = vec.begin();

//  it = vec.begin()
// while(it != vec.end())
// {

//   std::cout << *it << "," << std::endl;
//   ++it;

  
// }

// }