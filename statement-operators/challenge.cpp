#include <iostream>

using namespace std;

int main() {
    const int dollar = 100;
    const int quater = 25;
    const int dime = 10;
    const int nickel = 5;
    const int penny = 1;

    int cents;
    cout << "Enter a cents amount: ";
    cin >> cents;

    int dollarAmount {0};
    int quaterAmount {0};
    int dimeAmount {0};
    int nickelAmount {0};
    int pennyAmount {0};

    dollarAmount = cents / dollar;
    int balance = cents % dollar;

    quaterAmount = balance / quater;
    balance = balance % quater;

    dimeAmount = balance / dime;
    balance = balance % dime;

    nickelAmount = balance / nickel;
    balance = balance % nickel;

    pennyAmount = balance;

    cout << "You can provide this change as follows : " << endl;
    cout << "dollars  : " << dollarAmount << endl;
    cout << "quarters : " << quaterAmount << endl;
    cout << "dimes    : " << dimeAmount << endl;
    cout << "nickels  : " << nickelAmount << endl;
    cout << "pennies  : " << pennyAmount << endl;

    return 0;
}