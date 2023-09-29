#include<iostream>
#include<vector>
#include<algorithm>

class Person
{
  private:
   friend std::ostream &operator << (std::ostream &os, const Person &p);
   std::string name;
   int age;
  
  public:
    Person() = default;
    Person(std::string name, int age)
      :name{name},age{age}
      {}
    
    bool operator < (const Person &rhs) const{
      return this -> age < rhs.age;
    }

    bool operator == (const Person &rhs) const{
      return (this -> name == rhs.name && this -> age == rhs.age);


    }
};

  std::ostream &operator << (std::ostream &os, const Person &p){
    os << p.name << ":" << p.age;
    return os;
  }

  // use for each and a lambda expression to display vector elements
  void display2(const std::vector<int> &vec)
 {
    std::cout << "[";
    std::for_each(vec.begin(), vec.end(), [](int x) { std::cout << x << " "; });
    std::cout << "]" << std::endl;
 }  

 // Template function to display any vector 
 template<typename T>

 void display(const std::vector<T> &vec)
 {
  std::cout << "[";
  for(const auto &elem:vec)
      std::cout << elem << ",";
  std::cout << "]" << std::endl;
 }

 void Test1()
 {

  std::cout << " \n Test1 ======================================================= " << std::endl;

  std::vector<int> vec{1,2,3,4,5};
  display(vec);

  vec = {2,4,5,6};
  display(vec);

  std::vector<int> vec1(10,100);                       // ten 100s in the vector.. // this are the part of overloaded constructor in stl..
  display(vec1);

 }

 void Test2()
 {

  std::cout << " \n Test2 ====================================================== " << std::endl;

  std::vector<int> vec{1,2,3,4,5};
  display(vec);
  
  std::cout << " Size of the vector: " << vec.size() << std::endl;
  std::cout << " Max size of vector: " << vec.max_size() << std::endl;
  std::cout << " Capacity of the vector: " << vec.capacity() << std::endl;


  vec.push_back(6);
  display(vec);
  vec.push_back(7);
  display(vec);                                         // i.e. 1,2,3,4,5,6,7..

  std::cout << " Size of the vector is: " << vec.size() << std::endl;
  std::cout << " Max size of vector is: " << vec.max_size() << std::endl;
  std::cout << " Capacity of the vector is: " << vec.capacity() << std::endl;


  vec.shrink_to_fit();             // C++ 11
  display(vec);
  std::cout << " Vec Size: " << vec.size() << std::endl;
  std::cout << " Vec capacity " << vec.capacity() << std::endl;
  std::cout << " Vec max size " << vec.capacity() << std::endl;


  vec.reserve(100);
  display(vec);
  std::cout << " Vec size: " << vec.size() << std::endl;
  std::cout << " Vec max size is: " << vec.max_size() << std::endl;
  std::cout << " Vec capacity is: " << vec.capacity() << std::endl;

 }

 void Test3()
 {
  std::cout << "\n Test3 ===========================================" << std::endl;
  std::vector<int> vec{1,2,3,4,5};
  display(vec);

  vec[0] = 100;         // Subscript operator does no bounds checking ...
  vec.at(1) = 200;      // At method does bounds checking..

  display(vec);
 }

 void Test4()
 {
  std::cout << " \n Test4 ======================================================= " << std::endl;
  std::vector<Person>stooges;

  Person p1{"Larry",18};
  display(stooges);

  stooges.push_back(p1);
  display(stooges);

  stooges.push_back(Person{"Moe",25});
  display(stooges);



  stooges.emplace_back("Curly",30);                         // Use emplace back...
  display(stooges);

  stooges.pop_back();
  display(stooges);





  // stooges.pop_back(Person{"Moe",25});
  // display(stooges);


 }

 void Test5()
 {

  std::cout << "\n Test5 ========================================================== " << std::endl;
  std::vector<Person> stooges
  {
    {"Larry",10},
    {"Moe",20},
    {"Curly",30}              
  };

  display(stooges);
  std::cout << " \n front: " << stooges.front() << std::endl;
  std::cout << " \n front: " << stooges.front() << std::endl;
  
  
 }

 void Test6()
 {

  std::cout << " \n Test7 ================================================ " << std::endl;
  std::vector<int> vec {1,2,3,4,5};

  display(vec);

  vec.clear();
  display(vec);

  vec = {1,2,3,4,5,6,7,8,9,10};
  display(vec);
  vec.erase(vec.begin(),vec.begin() + 2);
  display(vec);

  // vec.erase(vec.begin(),vec.begin() + 2);
  // display(vec);

  vec = {1,2,3,4,5,6,7,8,9,10};
  // erase all even numbers
  auto it = vec.begin();
  while(it != vec.end())
  {
    if(*it % 2 == 0)
      vec.erase(it);
    else
      it++;                   // Only increment if not erased!..
  }

  display(vec);

 }
 
 void Test7()
 {
  std::vector<int>vec1 {1,2,3,4,5};
  std::vector<int>vec2 {10,20,30,40,50};

  display(vec1);
  display(vec2);
  std::cout << std::endl;

  vec2.swap(vec1);
  display(vec1);
  display(vec2);
 }

 void Test8()
 {

  std::vector<int> vec1 {1,21,3,40,12};

  display(vec1);
  std::sort(vec1.begin(),vec1.end());
  display(vec1);

 }
 
 void Test9()
 {
  // std::back_inserter constructs a back-insert iterator that inserts new elements
  // at the end of the container it applied to.It's a special output iterator
  // It's awesome!!! and very efficient
  // There is also a front_inserter we can use with deques and lists
  // Copy one list to another using an iterator and back_inserter
  std::cout << " \n Test9() =============================================================== " <<  std::endl;
  std::vector<int> vec1 {1,2,3,4,5};
  std::vector<int> vec2 {10,20};

  display(vec1);
  display(vec2);
  std::cout << std::endl;

  std::copy(vec1.begin(),vec1.end(),std::back_inserter(vec2));
  display(vec1);
  display(vec2);
  std::cout << std::endl;

  // Copy_if the element is even
  vec1 = {1,2,3,4,5,6,7,8,9,10};
  vec2 = {10,20};

  std::copy_if(vec1.begin(),vec1.end(),std::back_inserter(vec2), [](int x) {return x%2 == 0;});
  display(vec1);
  display(vec2);
 }
 
 void Test10()
 {
   std::cout << " \nTest10 ================================================================ " << std::endl;
   // transform over 2 ranges

   std::vector<int> vec1 {1,2,3,4,5};
   std::vector<int> vec2 {10,20,30,40,50};
   std::vector<int> vec3;

   // 1 * 10,2 * 20 , 3 * 30, 4 * 40, 5 * 50 and store the results in vec3
   std::transform(vec1.begin(), vec1.end(), vec2.begin(), std::back_inserter(vec3), [](int x,int y) {return x * y;});

   display(vec3);

  
 }
 
 void Test11()
 {
  std::cout << " \n Test11 =========================================================== " << std::endl;
  std::vector<int> vec1 {1,2,3,4,5,6,7,8,9,10};
  std::vector<int> vec2 {100,200,300,400};

  display(vec1);
  display(vec2);
  std::cout << std::endl;

  auto it = std::find(vec1.begin(),vec1.end(),5);

  if(it != vec1.end())
   {
     std::cout << " Inserting " << std::endl;
    vec1.insert(it,vec2.begin(),vec2.end());
   }
   
   else
   {
    std::cout << " Sorry, 5 not found " << std::endl;

   }

   display(vec1);
    
 }

 int main()
 {
  // Test1();
  // Test2();
  // Test3();
  // Test4();
  // Test5();
  // Test6();
  // Test7();
  // Test8();
  // Test9();
  // Test10();
  Test11();

  return 0;
 }

