#include <iostream>
#include <vector>          /* Dont forget this in order to use vectors */
using namespace std;
int main(){

  // vector <int> test_scores {100,90,30};


	// int high_score_per_level [10] {3,5};
	// cout << "The integer number is in array" << endl;

	// char vowels[] {'a','e','i','o','u'};
	// cout << "\nThe First vowel is:" << vowels[0] << endl;
	// cout << "\nThe second vowel is:"<< vowels[1] << endl;
	// cout << "\nThe third vowel is:" << vowels[2] << endl;
	// cout << "\nThe fourth vowel is:"<< vowels[3] << endl;
	// cout << "\nThe fifth vowel is:" << vowels[4] << endl;

	// cin >> vowels[5];

	// vector <int> test_scores {100,95,99,87,88};
	// cout << "First score at index 0: " << test_scores[0] << endl;
	// cout << "second score at index 1: " << test_scores[1] << endl;

  // AT METHOD VECTORS:

  // vector <int> test_scores {10,20,30,40,50};

  // cin >> test_scores.at(0);
  // cin >> test_scores.at(1);
  // cin >> test_scores.at(2);
  // cin >> test_scores.at(3);
  // cin >> test_scores.at(4);

  // test_scores.at(0) = 90;

  // PUSH BACK Method:

  // vector <int> test_scores {100,80,90};

  // test_scores.push_back(80);
  // test_scores.push_back(90);  

  // Sample o/p:
  // (100,80,90)
 
 


    // vector <char> vowels;
    // vector <char> vowels {'a','e','i','o','u'};

    // cout << vowels[0] << endl;
    // cout << vowels[1] << endl;
    // cout << vowels[4] << endl;
    // cout << vowels[2] << endl;
    // cout << vowels[3] << endl;

    // vector <int> test_scores {100,20,40};

    // cout << test_scores[0] << endl;
    // cout << test_scores[2] << endl;
    // cout << test_scores[1] << endl;

    // vector <int> test_scores (3);    /* 3 elements all initialized to zero */
    // vector <int> test_scores (3,100); /* 3 elements all initialized to 100 */

    // vector <int> test_scores{100,90,80};

    // cout << "\n Test Scores using array syntax:" << endl;
    // cout << test_scores[0] << endl;
    // cout << test_scores[1] << endl;
    // cout << test_scores[2] << endl;
    

    // AT METHOD:
    
    // vector <int> test_scores{100,80,90};
    // cout << "\n Test scores using vector syntax" << endl;
    // cout << test_scores.at(0) << endl;
    // cout << test_scores.at(1) << endl;
    // cout << test_scores.at(2) << endl;

    // SIZE METHOD IN VECTOR:

    // cout << " There are " <<  test_scores.size()   << " scores in the vector " << endl;

    // UPDATE VALUES:
    //  cout << " \n enter 3 test scores " << endl;

    //  cin >> test_scores.at(0);
    //  cin >> test_scores.at(1);
    //  cin >> test_scores.at(2);

    //  cout << "\n Update  test scores" << endl;
    //  cout << test_scores.at(0) << endl;
    //  cout << test_scores.at(1) << endl;
    //  cout << test_scores.at(2) << endl;

        // cout << "Enter a test score to add to the vector" << endl;

        // int score_to_add {0};
        // cin >> score_to_add;

        // test_scores.push_back(score_to_add);

        // cout << "\n Test scores are now:" << endl;
        
        // cout << test_scores.at(0) << endl;
        // cout << test_scores.at(1) << endl;
        // cout << test_scores.at(2) << endl;
        // cout << test_scores.at(3) << endl;
        // cout << test_scores.at(4) << endl;

        // Example of 2D vector:

           vector <vector<int>> movie_ratings
           {
            {1,2,3,4},
            {1,2,4,4},
            {1,3,4,5}
           };

           cout << " \nHere are the movie rating for reviewer  #1 using array syntax:" << endl;
           cout << movie_ratings[0][0] << endl;
           cout << movie_ratings[0][1] << endl;
           cout << movie_ratings[0][2] << endl;
           cout << movie_ratings[0][3] << endl;

           cout << "\nHere are the movie rating for reviewer #2 using vector syntax:" << endl;
           cout << movie_ratings.at(0).at(0) << endl;
           cout << movie_ratings.at(0).at(1) << endl;
           cout << movie_ratings.at(0).at(2) << endl;
           cout << movie_ratings.at(0).at(3) << endl;








    
  




  // cout << "The test scores is:" << test_scores.at(0) << endl;



}

