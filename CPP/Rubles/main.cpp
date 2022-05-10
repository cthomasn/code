/*  Author: Christine Thomas
    Date Created: 3/4/22
    Section 8
   
*/

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {

    // As of 3/4/22 the ruble is worth less than one dime-- less than ONE-TENTH of a dollar.
    const double dollarToRuble {0.0096}; 
    const double rubleToDollar {104.40};

    cout << "\nWelcome to the RUB to USD Calculator." << endl;

    double rubles {0.0};
    double dollars {0.0};
    cout << "\nEnter the value in Rubles (RUB): ";
    cin >> rubles;

    cout << endl;

    dollars = rubles * rubleToDollar;

    cout << rubles << " ruble(s) is equivalent to " << dollars << " dollars." << endl;

    cout << "\nEnter the value in Dollars (USD): ";
    cin >> dollars;

    cout << endl;

    rubles = dollars * dollarToRuble;

    cout << dollars << " dollar(s) is equivalent to " << rubles << " ruble(s)." << endl;

    return 0;
}

