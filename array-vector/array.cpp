#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    constexpr char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    cout << endl;

    double hiTemps[] {90.1, 89.8, 77.5, 81.6};
    cout << "The first hi temperature is: " << hiTemps[0] << endl;
    hiTemps[0] = 100.7;
    cout << "The first hi temperature now is: " << hiTemps[0] << endl;
    cout << endl;

    int testScore[5];
    cout << "First score at index 0 is: " << testScore[0] << endl;
    cout << "Second score at index 1 is: " << testScore[1] << endl;
    cout << "Third score at index 2 is: " << testScore[2] << endl;
    cout << "Fourth score at index 3 is: " << testScore[3] << endl;
    cout << "Fifth score at index 4 is: " << testScore[4] << endl;
    cout << endl;

    cout << "Enter 5 test score separate by space: " << endl;
    cin >> testScore[0] >> testScore[1] >> testScore[2] >> testScore[3] >> testScore[4];
    cout << "Update test score is: " << endl;
    cout << "First score at index 0 is: " << testScore[0] << endl;
    cout << "Second score at index 1 is: " << testScore[1] << endl;
    cout << "Third score at index 2 is: " << testScore[2] << endl;
    cout << "Fourth score at index 3 is: " << testScore[3] << endl;
    cout << "Fifth score at index 4 is: " << testScore[4] << endl;
    cout << endl;

    cout << "The value of array name is: " << testScore << endl;
    cout << endl;
    return 0;
}