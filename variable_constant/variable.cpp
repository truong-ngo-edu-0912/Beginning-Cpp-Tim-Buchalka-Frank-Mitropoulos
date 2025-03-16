#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * Room's area calculation
 * @author Truong Ngo
 */
int main() {
    int width {0};
    int length {0};

    cout << "Enter room width and length separate by space: ";
    cin >> width >> length;
    cout << "The area of room is: " << width * length << endl;
}
