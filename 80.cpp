#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
    return a > b;   // descending order
}

int main() {
    vector<int> v = {5, 2, 8, 1, 3};

    sort(v.begin(), v.end(), compare);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
