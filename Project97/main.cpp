// DEQUE:
#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>

// Template function display any deque
template<typename T>
void display(const std::deque<T> &d)
{
  std::cout<< "[";
  for(const auto &elem:d)
    std::cout << elem << " ";
  std::cout << "]" << std::endl;
}

void Test1()
{
  std::cout << " \n Test1 =========================================================== " << std::endl;

  std::deque<int> d{1,2,3,4,5};
  display(d);
  
  d = {2,4,5,6};
  display(d);

  std::deque<int> d1(10,100);    // ten 100s in the deque
  display(d1);

  d[0] = 100;
  d.at(1) = 200;
  display(d);
}

void Test2()
{
 // push and pops:
 std::deque<int> d{0,0,0};
 display(d);

 d.push_back(10);
 d.push_back(20);
 d.push_back(30);
 display(d);
 

 d.push_front(100);
 d.push_front(200);
 d.push_front(300);
 display(d);

 std::cout << " Front " << d.front() << std::endl;
 std::cout << " Back "  << d.back() << std::endl;
 std::cout << " Size " << d.size() << std::endl;

 d.pop_back();
 d.pop_front();
 display(d);
 
}

void Test3()
{
  // Insert all even numbers into the back of a deque and all 
  // odd numbers into the front.
  std::cout << " \n Test3 ====================================================================== " << std::endl;
  std::vector<int> vec{1,2,3,4,5,6,7,8,9,10};
  std::deque<int>d;

  for (const auto &elem:vec)
  {
    if( elem % 2 == 0)
      d.push_back(elem);
    else
      d.push_front(elem);
  }

  display(d);

}

void Test4()
{
  // push front vs. back ordering
  std::cout << " \nTest4 =============================================== " << std::endl;

  std::vector<int> vec{1,2,3,4,5,6,7,8,9,10};
  std::deque<int> d;                                            // empty deque..

  for(const auto &elem: vec)
  {
    d.push_front(elem);
  }

  display(d);

  d.clear();

  for(const auto &elem: vec)
  {
    d.push_back(elem);
  }

  display(d);
}

void Test5()
{
  std::cout << " \n Test5 ======================================================== " << std::endl;

  std::vector<int> vec {1,2,3,4,5,6,7,8,9,10};
  std::deque<int>d;                                        // Empty deque..

  std::copy(vec.begin(),vec.end(), std::front_inserter(d));
  display(d);

  d.clear();

  std::copy(vec.begin(), vec.end(),std::back_inserter(d));
  display(d);

}


int main()
{
  // Test1();
  // Test2();
  // Test3();
  // Test4();
  // Test5();

}