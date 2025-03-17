#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vector1 {};
    vector<int> vector2 {};
    vector1.push_back(10);
    vector1.push_back(20);
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "Vector 1 element 1: " << vector1.at(0) << endl;
    cout << "Vector 1 element 2: " << vector1.at(1) << endl;
    cout << "Vector 1 size: " << vector1.size() << endl;
    cout << "Vector 2 element 1: " << vector2.at(0) << endl;
    cout << "Vector 2 element 2: " << vector2.at(1) << endl;
    cout << "Vector 2 size: " << vector1.size() << endl;

    int num1 {13};

    vector<vector<int>> vector_2d {};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Vector 2d element 11: " << vector_2d.at(0).at(0) << endl;
    cout << "Vector 2d element 12: " << vector_2d.at(0).at(1) << endl;
    cout << "Vector 2d element 21: " << vector_2d.at(1).at(0) << endl;
    cout << "Vector 2d element 22: " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;
    cout << "Vector 1 element 1: " << vector1.at(0) << endl;
    cout << "Vector 1 element 2: " << vector1.at(1) << endl;

    cout << "Vector 2d element 11: " << vector_2d.at(0).at(0) << endl;
    cout << "Vector 2d element 12: " << vector_2d.at(0).at(1) << endl;
    cout << "Vector 2d element 21: " << vector_2d.at(1).at(0) << endl;
    cout << "Vector 2d element 22: " << vector_2d.at(1).at(1) << endl;
}
