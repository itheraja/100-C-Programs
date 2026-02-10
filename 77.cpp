#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {5, 1, 3, 5, 2};

    for (int x : s) {
        cout << x << " ";
    }

    return 0;
}
