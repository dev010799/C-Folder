#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<list>
#include<array>

int main()
{
  // std::array<int,5> arr {1,2,3,4,5};
  // std::cout << arr.size() << std::endl;
  // std::cout << arr.front() << std::endl;
  // std::cout << arr.back() << std::endl;
  // std::cout << arr.at(0) << std::endl;
  // std::cout << arr[3] << std::endl;

  std::array<int,5> arr {1,2,3,4,5};
  std::array<int,5> arr {10,20,30,40,50};

  std::cout << arr.empty() << std::endl;
  std::cout << arr.max_size() << std::endl;

  // arr.swap(arr1);                                // swap the 2 arrays.
  // int *data = arr.data();                        // get raw array address.


  return 0;
  
}