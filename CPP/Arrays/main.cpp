/*  Author: Christine Thomas
    Date Created: 3/3/22
*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    // char vowels[] {'a', 'e', 'i', 'o', 'u'};
    // cout << "\nThe first vowel is: " << vowels[0] << endl;
    // cout << "The last vowel is: " << vowels[4] << endl;

    // // This is NOT crashing...
    // // cin >> vowels[5]; 
    // // cout << vowels[5] << endl;   

    // double highTemps [] {90.1, 89.8, 77.5, 81.6};
    // cout << "\nThe first high temperature is: " << highTemps[0] << endl;

    // highTemps[0] = 100.7; // set the first element in highTemps to 100.7

    // cout << "The first high temperature is now: " << highTemps[0] << endl;

    // // DON'T DO THIS
    // // int testScores[5];

    // // DO THIS INSTEAD
    // //int testScores[5] {}; // this will initialize the array elements to zeroes.
    // // if you do this: 
    // int testScores[5] {100, 90}; // the first two elements will be filed with these values, the rest will be zeroes.

    // cout << "\nFirst score at index 0: " << testScores[0] << endl;
    // cout << "\nSecond score at index 1: " << testScores[1] << endl;
    // cout << "\nThird score at index 2: " << testScores[2] << endl;
    // cout << "\nFourth score at index 3: " << testScores[3] << endl;
    // cout << "\nFifth score at index 4: " << testScores[4] << endl;

    // cout << "Enter 5 test scores:" << endl;
    // cin >> testScores[0];
    // cin >> testScores[1];
    // cin >> testScores[2];
    // cin >> testScores[3];
    // cin >> testScores[4];

    // cout << endl;
    // cout << "Test scores:" << endl;

    // for (int i = 0; i < 5; i++) {
    //     cout << testScores[i] << endl;
    // }

    // cout << "\nNotice what the value of the array name is: " << testScores << endl;

    // cout << endl;
    
    const int rows {3};
    const int columns {4};

    int movieReviews[rows][columns] {

        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}

    };

    
    // sizeof(movieReviews) == 48. 12x4 = 48. 
    // If we divide this by ONE element of the 2D array, i.e., sizeof(movieReviews)/sizeof(movieReviews[any row][any column]),
    // which is 4 bytes, we will see that the number of elements in the array is 48/4 = 12!
    // This makes sense because this is basically a 3x4 matrix.
    cout << "\nSize in bytes of one element in an array: " << sizeof(movieReviews[0][0]) << endl;
  
    cout << "\nSize in bytes of movieReviews two dimensional array: " << sizeof(movieReviews) << endl;
    
    // since this indexes into the rows, this will get the size of the whole row.
    // this basically acts as if you were getting the size of a one-dimensional array.
    cout << "\nSize in bytes of one row in movieReviews two dimensional array: " << sizeof(movieReviews[0]) << endl;

    cout << "\nNumber of columns in movieReviews two dimensional array: " << sizeof(movieReviews[0])/sizeof(movieReviews[0][0]) << endl; 
    cout << "\nNumber of rows in movieReviews two dimensional array: " << sizeof(movieReviews)/sizeof(movieReviews[0]) << endl;
    
    // getting the size of the multidimensional array- 12 bc it is 3x4 = 12. 
    // we do it this way because sizeof returns the size of the type in bytes, not the number of elements in the array.
    cout << "\nSize of movieReviews two dimensional array: " << sizeof(movieReviews)/sizeof(movieReviews[0][0]) << endl;

    cout << endl;

    // iterating through the 2D array
    for (int i = 0; i < rows; i++) { // rows
        for (int j = 0; j < columns; j++) { // columns
            cout << "Row: " << i << ", Column: " << j << " = " << movieReviews[i][j] << "." << endl;
        }
    }





}