#include<iostream>
#include<vector>
using namespace std;

int main (){
  // for (int num1{1}; num1 <= 10; ++num1){
  //   for(int num2{2}; num2 <= 10; ++num2){
  //     cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
  //   }

  //   cout << " --------------------------- " << endl;
  // }

  // 2D ARRAY - DISPLAY ELEMENTS:

  // int grid[5][3] {};
  // for (int row {0}; row < 5; ++row){
  //   for(int col{0}; col < 3; ++col){
  //     cout << grid[row][col] << " ";
  //   }
  //   cout << endl;
  // }

  // HISOGRAM PROBLEM:

    // int num_items{};

    // cout << "How many data items do you have? :";
    // cin >> num_items;

    // vector <int>  data{};

    // for(int i{1}; i<=num_items; ++i){
    //   int data_item {};
    //   cout << " Enter data item " << i << " : ";
    //   cin >> data_item;
    //   data.push_back(data_item);

    // } 
    // cout << " \n Displaying Histogram " << endl;
    // for (auto val:data){
    //    for(int i{1}; i<=val; ++i){
    //     cout << " - ";
    //    }

    //    cout << endl;
    // }

     int num_items{};

    cout << "How many data items do you have? :";
    cin >> num_items;

    vector <int>  data{};

    for(int i{1}; i<=num_items; ++i){
      int data_item {};
      cout << " Enter data item " << i << " : ";
      cin >> data_item;
      data.push_back(data_item);

    } 
    cout << " \n Displaying Histogram " << endl;
    for (auto val:data){
       for(int i{1}; i<=val; ++i){

        if(i % 5 == 0)
          cout << " * ";
        else
          cout << " - ";
       }

       cout << endl;
    }



  cout << endl;
  return 0;

}