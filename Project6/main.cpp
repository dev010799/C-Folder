 #include <iostream>
 #include <vector>
 using namespace std;

 
  int main(){
    // cout << "Hello welcome to Frank's carpet cleaning service" << endl;
    
    // cout << "How many rooms would you like cleaned " << endl;


    // int number_of_rooms{0};
    // cin >> number_of_rooms;


    // const double  price_per_room{32.5};
    // const double sales_tax {0.06};
    // const int estimate_expiry {30};


    // cout << "\nEstimate for carpet cleaning service" << endl;
    // cout << "Number of rooms:" << number_of_rooms << endl;
    // cout << "Price per room: $" <<  price_per_room << endl;
    // cout << "Cost: $" <<  price_per_room * number_of_rooms << endl;
    // cout << "Tax:$" <<  price_per_room * number_of_rooms * 0.06 << endl;
    // cout << "=============================================" << endl;

    // cout << "Total estimate:$" << ( price_per_room * number_of_rooms) + ( price_per_room + number_of_rooms * 0.06) << endl;
    // cout << " This estimate is valid for " <<  price_per_room << " days "  << endl;
    // cout << " The estimate is valid for " << estimate_expiry <<" days " << endl;

    // cout << endl;
    // return 0;
   cout << "Hello welcome to Frank's carpet cleaning service" << endl;


   int small_rooms{0};
   cout << "\n How many small rooms would you like cleaned?";
   cin >> small_rooms;

   int large_rooms{0};
   cout << "\n How many large rooms would you like cleaned?";
   cin >> large_rooms;

   const double price_per_small_room {25.0};
   const double price_per_large_room {35.0};
   

   const double sales_tax{0.06};
   const int estimate_expiry{30};

   cout << " \n Estimate for carpet cleaning service " << endl;
   cout << " \n Number of small rooms: " << small_rooms << endl;
   cout << " \n Number of large rooms: " << large_rooms << endl;

   cout << " \n Price per small room: $" << price_per_small_room << endl;
   cout << " \n Price per large room: $" << price_per_large_room << endl;

   cout << " cost:$" 
        << ((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) 
        << (((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) * sales_tax) << endl;
     
    cout <<"=======================================================" << endl;

    cout << "Total estimate: $"
         << ((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) + 
            (((price_per_small_room * small_rooms) + (price_per_large_room * large_rooms)) * sales_tax) << endl;

    cout << "This estimate is valid for" << estimate_expiry << "days" << endl;

    cout << endl;
    return 0;
  }

int main() {
	int a = 10;
	char b = 'a';
}