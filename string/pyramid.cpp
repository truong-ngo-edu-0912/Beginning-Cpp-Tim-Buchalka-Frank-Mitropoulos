#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void printPyramidLayer(const string &s, const int count, const int currentIndex) {
    const int pivot = (count - 1) / 2;            // Count is always odd
    const int left = pivot - currentIndex;
    const int right = pivot + currentIndex;
    for (int i = 0; i < count; i++) {
        if (i < left || i > right) {
            cout << " ";
        } else {
            cout << s[i - left];
        }
    }
    cout << endl;
}

string getStringPart(const string& s, const int currentIndex) {
    if (s.length() == 1) return string {s};
    const string part = s.substr(0, currentIndex + 1);
    string reversed = part.substr(0, part.length() - 1);
    reverse(reversed.begin(), reversed.end());
    return part + reversed;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    const int count = s.length() * 2 - 1;
    for (int i = 0; i < s.length(); i++) {
        const string part = getStringPart(s, i);
        printPyramidLayer(part, count, i);
    }
    return 0;
}