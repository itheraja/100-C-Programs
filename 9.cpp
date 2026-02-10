#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    cout << "Length of first string: " << str1.length() << endl;

    string result = str1 + str2;
    cout << "Concatenated string: " << result;

    return 0;
}
