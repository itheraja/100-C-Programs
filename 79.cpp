#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 3};

    sort(v.begin(), v.end());

    auto it = find(v.begin(), v.end(), 8);

    for (int x : v) {
        cout << x << " ";
    }

    if (it != v.end()) {
        cout << "\nElement found";
    } else {
        cout << "\nElement not found";
    }

    return 0;
}
