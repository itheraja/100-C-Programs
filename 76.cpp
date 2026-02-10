#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    mp[1] = "Apple";
    mp[2] = "Banana";
    mp[3] = "Cherry";

    for (auto it : mp) {
        cout << it.first << " => " << it.second << endl;
    }

    return 0;
}
