/*  Author: Christine Thomas
    Date Created: Idk sometime in late February
    Date Updated: 3/3/22
*/

#include <iostream>
#include <string>

int main(){
    // std::string amountOfLove{"Infinity"};
    // std::cout << "Love amount: " << std::endl;
    // std::cin >> amountOfLove;
    // std::cout << "I love you " << amountOfLove << " love points, Gama and Gapa." << std::endl;

    // Apparently, it is better to use declared constants than literal constants in C++

    /*
    Christine's Carpet Cleaning Service
    Charges $30 per room
    Sales tax is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:

    Estimate for carpet cleaning service:
    Number of rooms: 2
    Price per room: $30
    Cost: $60
    Tax: $3.6
    ==============================================
    Total Estimate: $63.6
    This estimate is valid for 30 days.

    Pseudocode:
    Prompt the user to enter the number of rooms.
    Display the number of rooms.
    Display the price per room.

    Display cost: (number of rooms * price per room)
    Display tax rate: (number of rooms * price per room * tax rate)
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
    */

    const double PRICE_PER_SMALL_ROOM {25.0};
    const double PRICE_PER_LARGE_ROOM {35.0};
    const double SALES_TAX {0.06};
    const int DAYS_VALID {30};

    std::cout << "Hello, welcome to Christine's Carpet Cleaning Service!" << std::endl;

    int numberOfSmallRooms {0};
    std::cout << "\nHow many small rooms would you like cleaned?" << std::endl;
    std::cin >> numberOfSmallRooms;
    
    int numberOfLargeRooms {0};
    std::cout << "\nHow many large rooms would you like cleaned?" << std::endl;
    std::cin >> numberOfLargeRooms;

    std::cout << "\nEstimate for carpet cleaning service:" << std::endl;
    std::cout << "Number of small rooms: " << numberOfSmallRooms << std::endl;
    std::cout << "Price per small room: $" << PRICE_PER_SMALL_ROOM << std::endl;

    std::cout << "Number of large rooms: " << numberOfLargeRooms << std::endl;
    std::cout << "Price per large room: $" << PRICE_PER_LARGE_ROOM << std::endl;

    double preTaxTotalOfRooms = ((PRICE_PER_SMALL_ROOM * numberOfSmallRooms) + (PRICE_PER_LARGE_ROOM * numberOfLargeRooms));
    double postTaxTotalOfRooms = preTaxTotalOfRooms * SALES_TAX;

    std::cout << "Cost: $" << preTaxTotalOfRooms << std::endl;
    std::cout << "Tax: $" << (preTaxTotalOfRooms * SALES_TAX) << std::endl;
    std::cout << "======================================" << std::endl;
    std::cout << "Total: $" << (preTaxTotalOfRooms +  postTaxTotalOfRooms) << std::endl;
    std::cout << "This estimate is valid for " << DAYS_VALID <<  " days." << std:: endl;



    std::cout << std::endl;

    return 0;
}