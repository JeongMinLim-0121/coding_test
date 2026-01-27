#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
     
    string s;
    cin >> s;

    int cnt[26] = {0};

    for (char& c : s) {
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        else {
            c = c - 32;
        }
    }
    cout << s;
    return 0;
}
