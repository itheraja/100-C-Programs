#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = {10, 20, 30};

    myList.push_back(40);
    myList.push_front(5);

    for (int x : myList) {
        cout << x << " ";
    }

    return 0;
}
