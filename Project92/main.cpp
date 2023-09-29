#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<list>

// display aany vector of integers using range-based for loop..
void display(const std::vector<int> &vec)
{
  std::cout <<"[";
  for(auto const &i: vec)
  {
    std::cout << i << "";
  }
  std::cout << "]" << std::endl;
}
void test1()
{
  std::cout << " \n ================================================= " << std::endl;
  std::vector<int> nums1 {1,2,3,4,5};
  auto it = nums1.begin();
  std::cout << *it << std::endl;   // point to 1

  it++;
  std::cout << *it << std::endl;   // point to 2

  it += 2;
  std::cout << *it << std::endl;   // point to 4

  it -= 2;
  std::cout << *it << std::endl;   // point to 2

  it = nums1.end() - 1;
  std::cout << *it << std::endl;   // point to 5



  
}

void test2()
{
  std::cout << " \n ========================================================= " << std::endl;
  // display all vector elements using an iterator.

  std::vector <int> nums1 {1,2,3,4,5};

  std::vector<int>::iterator it = nums1.begin();
  while(it != nums1.end())
  {
    std::cout << *it << std::endl;
    it++;
  }

  // Change all vector elements to 0:

  it = nums1.begin();
  while (it != nums1.end())
  {
    *it = 0;                                      // we're changing all of those values in that vector to 0.. 
    it++;
  }

  display(nums1);


}

void test3()
{
  // Using a const iterator:
  std::cout << " \n ============================================================ " << std::endl;
  std::vector<int> nums1{1,2,3,4,5};

  std::vector<int>::const_iterator it1 = nums1.begin();
  // auto it1 = nums1.cbegin();

  while(it1 != nums1.cend())
  {
    std::cout << *it1 << std::endl;
    it1++;

  }

  // compiler error when we try to change element
  it1 = nums1.begin();
  while(it1 != nums1.end())
  {
    // *it1 = 0;       // compiler error - read only
    it1++;
  }

}

void test4()
{
  std::vector<int> vec{1,2,3,4};
  auto it1 = vec.rbegin();
  while(it1 != vec.rend())
  {
    std::cout << *it1 << std::endl;
    it1++;
  }

  // const reverse iterator over a list.
  std::list<std::string> name{"Larry","Moe","Curly"};
  auto it2 = name.crbegin();                              // iterator over list of strings point to curly
  std::cout << *it2 << std::endl;
  it2++;                                                  // Point to Moe
  std::cout << *it2 << std::endl;

  // Iterator over a map
  std::map<std::string,std::string> favourites{
    {" Frank "," C++ "},
    {" Bill ", " Java "},
    {" James "," Haskell "}

  };

  auto it3 = favourites.begin();       // iterator over map of strings pairs
  while(it3 != favourites.end())
  {
    std::cout << it3 -> first << ":" << it3 -> second << std::endl;
    it3++; 
  }




}

void test5()
{
  // Iterate over a subset of a container
  std::vector<int> vec{1,2,3,4,5,6,7,8,9,10};
  auto start = vec.begin() + 2;
  auto finish = vec.end()  - 3;

  while(start != finish)
  {
    std::cout << *start << std::endl;
    start++;
  }
}
int main()
{
  // test1();
  // test2();
  // test3();
  // test4();
  test5();
  return 0;
}