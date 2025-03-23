#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <algorithm>

using namespace std;

void render() {
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display smallest number" << endl;
    cout << "L - Display largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
    cout << "Enter your choice: ";
}

char choice() {
    char choice;
    do {
        render();
        cin >> choice;
        if (std::toupper(choice) == 'P' ||
            std::toupper(choice) == 'A' ||
            std::toupper(choice) == 'M' ||
            std::toupper(choice) == 'S' ||
            std::toupper(choice) == 'L' ||
            std::toupper(choice) == 'Q') {
            return choice;
        }
        cout << "Invalid choice!" << endl;
        cout << endl;
    } while (true);
}

int inputNumber(const string& prompt) {
    int number;
    while (true) {
        cout << prompt;
        cin >> number;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Error!. Please type a valid number." << endl;
        } else {
            return number;
        }
    }
}

void handlerP(vector<int>& numbers) {
    if (numbers.empty()) cout << "[] - The list is empty" << endl;
    else {
        cout << "[ ";
        for (const auto i : numbers) {
            cout << i << " ";
        }
        cout << "]" << endl;
    }
    cout << endl;
}

void handlerA(vector<int>& numbers) {
    const int number = inputNumber("Please enter a number: ");
    numbers.push_back(number);
    cout << number << " added" << endl;
    cout << endl;
}

void handlerM(vector<int>& numbers) {
    if (numbers.empty()) cout << "Unable to calculate the mean - no data" << endl;
    long sum = 0;
    for (const int num : numbers) {
        sum += num;
    }
    const double average = sum / static_cast<double>(numbers.size());
    cout << average << endl;
    cout << endl;
}

void handlerS(vector<int>& numbers) {
    if (numbers.empty()) cout << "Unable to determine the smallest number - list is empty" << endl;
    const int min = *min_element(numbers.begin(), numbers.end());
    cout << min << endl;
    cout << endl;
}

void handlerL(vector<int>& numbers) {
    if (numbers.empty()) cout << "Unable to determine the largest number - list is empty" << endl;
    const int max = *max_element(numbers.begin(), numbers.end());
    cout << max << endl;
    cout << endl;
}

void run() {
    vector<int> numbers;
    while (true) {
        switch (const char c = choice(); std::toupper(c)) {
            case 'P': handlerP(numbers); break;
            case 'A': handlerA(numbers); break;
            case 'M': handlerM(numbers); break;
            case 'S': handlerS(numbers); break;
            case 'L': handlerL(numbers); break;
            case 'Q': cout << "Goodbye" << endl; return;
            default: cout << "Invalid choice!" << endl;
        }
    }
}

int main() {
    run();
    return 0;
}