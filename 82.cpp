#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 3};

    sort(v.begin(), v.end(), [](int a, int b) {
        return a > b; // descending order
    });

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
