#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");

    try {
        if (!file) {
            throw "File not found!";
        }
        cout << "File opened successfully.";
    }
    catch (const char* msg) {
        cout << msg;
    }

    return 0;
}
