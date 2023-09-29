#include<iostream>
#include<sstream>
using namespace std;
// concept behind getters & setters:
// class SampleClass{
//   private:
//   int val;
//   public:
//   void set(int a)
//   {
//     val = a;
//   }
//   int get()
//   {
//     return val;
//   }
// };
// =============================================
// class Student 
// {
//   private:
//   int age,standard;
//   string first_name,last_name;

//   public:
//   void set_age(int a)
//   {
//     age = a;
//   }
//   int get_age()
//   {
//     return age;
//   }

//   void set_standard(int std)
//   {
//     standard = std;
//   }
//   int get_standard()
//   {
//     return standard;
//   }

//   void set_first_name(string fname)
//   {
//     first_name = fname;
//   }
//   string get_first_name()
//   {
//     return first_name;
//   }

//   void set_last_name(last_name lname)
//   {
//     last_name = lname;
//   }
//   string get_last_name()
//   {
//     return last_name;
//   }

//   string to_string()
//   {
//     stringstream ss;
//     ss<<age<<","<<first_name<<","<<last_name<<","<<standard;
//   }
// };
// int main()
// {
//   int age,standard;
//   string first_name;
//   string last_name;

//   cin>>age>>first_name>>last_name>>standard;

//   Student st;
//   st.set_age(age);
//   st.set_standard(standard);
//   st.set_first_name(first_name);
//   st.set_last_name(last_name);

//   cout<<st.get_age() <<"\n";
//   cout<<st.get_first_name() <<" " <<st.get_last_name()<<endl;
//   cout<<st.get_standard() << "\n";
//   cout<<"\n";
//   cout<<st.to_string();
// }