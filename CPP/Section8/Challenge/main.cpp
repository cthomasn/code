#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Create a program that takes an amoutn in cents and makes change

// set variables for dollar, quarter, dime, nickel and penny values.

// going to recursively call makeChange function on amountToChange variable 
// the first time the number on returned is not the same as the number entered,
// i.e, until it is zero.


int main() {

    cout << 92 % 100 << endl; // if the number on the left is bigger than the number on the right, modulo will return the number on the left.
    cout << 92 % 25 << endl;
    cout << 92 % 10 << endl; // first time we hit 0, so divide 20 by 10 to get number
    cout << 92 % 5 << endl; // we can also provide this as an alternate by doing the above.
    cout << 92 % 1 << endl;

    cout << endl;
    cout << 17 % 10 << endl;
    cout << 17 % 5 << endl;
    cout << 17 % 1 << endl;

    cout << endl;
    cout << 92 / 25 << endl;
    cout << 17 / 10 << endl;

    const int dollar_value {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};

    int amount {0};
    int change {0}, balance {0}, dollars {0};
    
    cout << "Enter an amount in cents to make change: ";
    cin >> amount;

    //change = amount % dollar; // 92 % 100 = 92
    dollars = amount / dollar_value; 

    balance =  change - (dollars * dollar_value )



    return 0;
}
