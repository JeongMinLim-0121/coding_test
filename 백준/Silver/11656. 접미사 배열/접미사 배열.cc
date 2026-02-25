#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
#include <queue>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string>v;
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        v.push_back(s.substr(i));
    }
    sort(v.begin(), v.end());
    for (auto& x : v) {
        cout << x << '\n';
    }
    return 0;
}
