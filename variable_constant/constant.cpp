#include <iostream>

using std::cout;
using std::endl;
using std::cin;

/**
 * Truong carpet cleaning service
 * @author Truong Ngo
 */
int main() {
    constexpr double PRICE_PER_ROOM {30};
    constexpr double TAX_RATE {0.1};
    constexpr int EXPIRY_TIME {30};
    int numberOfRooms {0};
    cout << "Hello, Welcome to Truong cleaning service!" << endl;
    cout << "How many room you would like to clean?: ";
    cin >> numberOfRooms;
    cout << "Estimate for cleaning service!" << endl;
    cout << "Number of rooms: " << numberOfRooms << endl;
    const double cost {numberOfRooms * PRICE_PER_ROOM};
    cout << "Cost: " << cost << endl;
    const double tax {cost * TAX_RATE};
    cout << "Tax: " << tax << endl;
    const double total {cost + tax};
    cout << "Total estimate: " << total << endl;
    cout << "This estimate is valid for " << EXPIRY_TIME << " day" << endl;
    return 0;
}