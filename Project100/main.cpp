// #include<iostream>
// #include<list>
// #include<string>
// // #include<algorithm>
// // #include<iterator>
// #include<cctype>
// #include<iomanip>
// #include<limits>

// class Song
// {
//   friend std::ostream &operator << (std::ostream &os,const Song &s);
//   std::string name;
//   std::string artist;
//   int rating;

//   public:
//     Song() = default;
//     Song(std::string name,std::string artist,int rating)
//         :name{name},artist{artist},rating{rating} {}
//     std::string get_name() const {
//       return name;
//     }

//     std::string get_artist() const{
//       return artist;
//     }

//     int get_rating() const{
//       return rating;
//     }

//     bool operator < (const Song &rhs) const{
//       return this -> name < rhs.name;
//     }

//     bool operator == (const Song &rhs) const{
//       return this -> == rhs.name;
//     }



// };

// std::ostream &operator << (std::ostream &os, const Song &s)
// {
//   os << std::setw(20) << std::left << s.name
//      << std::setw(30) << std::left << s.artist
//      << std::setw(2) << std::left << s.rating;

//      return os;
// }

// void display_menu()
// {
//   std::cout << " \n F - Play First Song " << std::endl;
//   std::cout << " \n N - Play Next Song " << std::endl;
//   std::cout << " \n P - Play Previous Song " << std::endl;
//   std::cout << " \n A - Add and play a new Song at current location " << std::endl;
//   std::cout << " \n L - List the current playlist " << std::endl;
//   std::cout << " ================================================================= " <<  std::endl;
//   std::cout << " Enter a selection (Q to quit):"; 
// }

// void play_current_song(const Song &song)
// {

//  std::cout << " Playing " << std::endl;
//  std::cout << song << std::endl; 

// }

// void display_playlist(const std::list<Song> &playlist, const Song & \)

// int main()
// {
//   std::list<Song> playlist
//   {
//     {" God's Plan ", " Drake ",                     5},
//     {" Never Be the Same ", " Camilla Cabello ",        5},
//     {" Pray For Me "  " The Weekend and K.Lamar ",       4},
//     {" The Middle ",  " Zedd, Maren Morris &Grey ",       5},
//     {" Wait"   ,         " Maroone 5 ",                    4},
//     {" Whatever It Takes " , " Imagine Dragons ",         3}


//   };

//   std::list<Song>:: iterator current_song = playlist.begin();

//   std::cout << " To be implemented " << std::endl;
//   // Your programming logic goes here

//   std::cout << " Thanks for Listening " << std::endl;

//   return 0;
// }
