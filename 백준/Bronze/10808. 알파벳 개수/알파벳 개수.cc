#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
     
    string s;
    cin >> s;

    int cnt[26] = {0};

    for (char c : s) {
        cnt[c - 'a']++;

    }

    for (int i = 0; i < 26; i++) {
        cout << cnt[i];
        if (i < 25) cout << ' ';
    }
    return 0;
}
