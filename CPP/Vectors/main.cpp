/*  Author: Christine Thomas
    Date Created: 3/3/22
*/

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main() {

    // vector <double> testScores {100, 95, 99, 87, 88};
    // testScores.push_back(80);
    // testScores.push_back(90);

    // cout << endl;

    // // find work-around to this warning 
    // // had to add one to this so that it is less than 8 not 7, bc 90 was not printing.
    // //for (int i = 0; i < sizeof(testScores)/sizeof(testScores[0]) + 1; i++) {
    //     for  (int i = 0; i < (int)testScores.size(); i++) {  // idk if casting to int is a proper work-around...
    //     cout << "Test score at index " << i << ": " << testScores.at(i) << endl;
    // }

    // cout << "\nEnter 3 test scores:" << endl;
    // cin >> testScores.at(0);
    // cin >> testScores.at(1);
    // cin >> testScores.at(2);

    // cout << "\nUpdated test scores:" << endl;
    //     for  (int i = 0; i < (int)testScores.size(); i++) {  
    //     cout << "Test score at index " << i << ": " << testScores.at(i) << endl;
    // }

    // int scoreToAdd {0};
    // cout << "\nEnter a test score to add to the vector:" << endl;
    // cin >> scoreToAdd;

    // testScores.push_back(scoreToAdd);

    // cout << "\nEnter another test score to add to the vector:" << endl;
    // cin >> scoreToAdd;

    // testScores.push_back(scoreToAdd);

    // cout << "\nTest scores are now: " << endl;

    //     for  (int i = 0; i < (int)testScores.size(); i++) {  
    //     cout << "Test score at index " << i << ": " << testScores.at(i) << endl;
    // }

    // // cout << "This should cause an exception! " << testScores.at(10) << endl;

    // cout << endl;

    // // vector <char> vowels; // empty
    // // vector <char> vowels (5); // 5 elements initialized to zero.
    // vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    // cout << "First element of vowels char vector: " << vowels[0] << endl;
    // cout << "Last element of vowels char vector: " << vowels[4] << endl;

    // cout << endl;

    // // vector <int> examMarks (3); // 3 elements initialized to zero
    // // vector <int> examMarks (3, 100); // 3 elements initialized to 100

    // vector <int> examMarks {100, 98, 89};

    // // This is 24 bytes bc this implementation of std::vector on our 64-bit architecture has 3 pointers built into the vector:
    // // 1. Pointer for the beginning of the vector
    // // 2. Pointer for the end of the vector
    // // 3. Pointer for the end of the vector's reserved memory, i.e., the vector's capacity. 
    // // See: https://stackoverflow.com/questions/34024805/c-sizeof-vector-is-24

    // cout << "Size in bytes of a default vector, in this case of type int: " << sizeof(vector <int>) << endl; 
    // cout << "Size in bytes of an element of the examMarks int vector: " << sizeof(examMarks[0]) << endl; // one element is 4 bytes
    // cout << "Size in bytes of an int: " << sizeof(int) << endl; // 4 bytes
    // cout << "Number of elements in examMarks int vector: " << examMarks.size() << endl; // 3 elements
    // cout << "Total size in bytes of the examMarks int vector: " << sizeof(vector <int>) + ((sizeof(int)) * examMarks.size()) << endl;

    // cout << "\nExam marks using vector syntax:" << endl;
    // // examMarks.size() returns type (vector<int>::size_type) AKA (long long unsigned int)
    // // casting to int gets rid of the warning this throws if you do not cast it.
    // for (int i = 0; i < (int)examMarks.size(); i++) {
    //     cout << "Exam mark at index " << i << ": " << examMarks.at(i) << endl;
    // }

    // cout << "\nExam marks using array syntax:" << endl;

    // for (int i = 0; i < (int)examMarks.size(); i++) {
    //     cout << "Exam mark at index " << i << ": " << examMarks[i] << endl;
    // }

    // vector <vector<int>> movieRatings {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}
    // };

    // cout << "\nHere are the movie ratings for reviewer #1 using array syntax:" << endl;
    // cout << movieRatings[0][0] << endl;
    // cout << movieRatings[0][1] << endl;
    // cout << movieRatings[0][2] << endl;
    // cout << movieRatings[0][3] << endl;

    // cout << "\nHere are the movie ratings for reviewer #1 using vector syntax:" << endl;
    // cout << movieRatings.at(0).at(0) << endl;
    // cout << movieRatings.at(0).at(1) << endl;
    // cout << movieRatings.at(0).at(2) << endl;
    // cout << movieRatings.at(0).at(3) << endl;

    // cout << endl;
    
    // for (int i = 0; i < (int)movieRatings.at(0).size(); i++) {
    //     for (int j = 0; j < (int)movieRatings[i].size(); j++) { // using vector syntax throws an exception
    //         cout << "Row: " << i << ", Column: " << j << " = " << movieRatings.at(i).at(j) << "." << endl;
    //     }
    // }

    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "\nVector 1:" << endl;
    cout << "{" <<vector1.at(0) << ", " << vector1.at(1) << "}" << endl;
    cout << "Size of vector: " << vector1.size() << endl;

    cout << endl;

    cout << "\nVector 2:" << endl;
    vector2.push_back(100);
    vector2.push_back(200);

    cout << "{" <<vector2.at(0) << ", " << vector2.at(1) << "}" << endl;
    cout << "Size of vector: " << vector2.size() << endl;

    cout << endl;

    vector <vector<int>> vector2D;

    // Okay, this is so cool.
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    cout << "\nVector 2D:" << endl;
    cout << "{" <<vector2D.at(0).at(0) << ", " << vector2D.at(0).at(1) << "}," << endl;
    cout << "{" <<vector2D.at(1).at(0) << ", " << vector2D.at(1).at(1) << "}" << endl;

    cout << endl;

    vector1.at(0) = 1000;

    cout << "\nVector 2D after updating Vector 1 at position 1:" << endl;
    cout << "{" <<vector2D.at(0).at(0) << ", " << vector2D.at(0).at(1) << "}," << endl;
    cout << "{" <<vector2D.at(1).at(0) << ", " <<  vector2D.at(1).at(1) << "}" << endl;

    cout << endl;

    cout << "\nVector 1 after updating position 1:" << endl;
    cout << "{" << vector1.at(0) << ", " << vector1.at(1) << "}" << endl;

    return 0;
}