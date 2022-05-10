#include <iostream>
#include <windows.h>
#include <climits> // has platform specific info on the size and precision of values allowed by your compiler 

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	// Sections 4 and 5
//	int favNum;
//	cout << "Enter your favorite number between 1 and 100:" << endl;
//	cin >> favNum;
//	Sleep(1000);
//	
//	// this does not handle string cases
//	if (favNum >= 1 && favNum <= 100) {
//		cout << "No way, " << favNum << "?! Mine too!" << endl;
//		Sleep(2000);
//	}
//	else {
//		cout << "I said a number between 1 and 100, not " << favNum << "." << endl;
//	}

	// Section 5
	// Basic cin and cout
//	int num1, num2, num3, num4, num5, num6;
//	double dub1, dub2;
//	
//	cout << "Enter an integer: ";
//	cin >> num1;
//	cout << "You entered: " << num1 << "." << endl << endl;
//	
//	cout << "Enter an integer: ";
//	cin >> num2;
//	cout << "Enter another integer: ";
//	cin >> num3;
//	cout << "You entered: " << num2 << " and " << num3 << "." << endl << endl;
//	
//	cout << "Enter two integers separated by a whitespace: ";
//	cin >> num4 >> num5;
//	cout << "You entered: " << num4 << " and " << num5 << "." << endl;
//	
//	cout << endl;
//	cout << "Okay, let's take a break here." << endl;
//	Sleep(1500);
//	cout << "." << endl;
//	Sleep(1500);
//	cout << "." << endl;
//	Sleep(1500);
//	cout << "." << endl << endl;
//	
//	cout << "Enter a double:";
//	cin >> dub1;
//	cout << "You entered: " << dub1 << endl << endl;
//	
//	cout << "Enter an integer: ";
//	cin >> num6;
//	cout << "Enter a double: ";
//	cin >> dub2;
//	
//	cout << "The integer is: " << num6 << endl;
//	cout << "The double is: " << dub2 << endl;

	// Section 6

//	int age;
//	cout << age << endl;
//	
//	// C++11 format of declaration and initialization:
//	int betterToDeclareAndInitializeAge {23};
//	cout << betterToDeclareAndInitializeAge << endl;


//	int roomWidth {0}; // best practice is to initialize this
//	int roomLength {0};
//
//	cout << "Enter the width of the room in feet: ";
//	// dood says to declare and initialize roomWidth here
//	cin >> roomWidth;
//	
//	cout << "Enter the length of the room in feet: ";
//	// dood says to declare and initialize roomLength here ... weird.
//	cin >> roomLength;
//	
//	cout << "The width of the room is " << roomWidth << " feet." << endl;
//	cout << "The length of the room is " << roomLength << " feet." << endl;
//	cout << "The area of the room is " << roomWidth * roomLength << " sqft." << endl;

	
	// Character type
	char middleInitial {'J'};
	cout << "My middle initial is " << middleInitial << endl;
	
	// Integer type
	unsigned short int examScore {55}; // same as unsigned short exam_score {55};
	cout << "My exam score was " << examScore << endl;
	
	int countriesRepresented {65};
	cout << "There were " << countriesRepresented << " countries represented in my meeting." << endl;
	
	long peopleInFlorida {20610000};
	cout << "There are about " << peopleInFlorida << " people in Florida." << endl;
	
	// C++11 list initialization will throw an error if you try to use only a long type to represent this number
	// whereas regular C style initialization will let it compile and will create an overflow error.
	long long peopleOnEarth {7'600'000'000}; 
	cout << "There are about " << peopleOnEarth << " people on Earth." << endl;
	
	long long distanceToAlphaCentauri {9'461'000'000'000};
	cout << "The distance to alpha centauri is " << distanceToAlphaCentauri << " kilometers." << endl;
	
	// Floating point types
	float carPayment {401.23};
	cout << "My car payment is " << carPayment << " dollars." << endl;
	
	double pi {3.14159};
	cout << "Pi is " << pi << endl;
	
	long double largeAmount {2.7e120};
	cout << largeAmount << " is a very big number." << endl;
	
	// Boolean type
	bool gameOver {false};
	cout << "The value of gameOver is: " << gameOver << endl;
	
	// Overflow examples
	short value1 {30000};
	short value2 {1000};
	short product {value1 * value2}; // throws warning bc product of these two shorts will not fit in another short
	
	cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
	
	// Size of stuff (watched)
	
	// Constants stuff (watched)
	
	
	
	return 0;
}
