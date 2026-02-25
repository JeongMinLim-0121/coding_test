#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
#include <unordered_map>
#include <climits>
using namespace std;
 
int digiSum(const string& s) {
    int sum = 0;
    for (char c : s) {
        if ('0' <= c && '9' >= c) sum += (c - '0');
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a;
    string str;
    vector<string>v;
    cin >> a;

    for (int i = 0; i < a; i++) {
        cin >> str;
        v.push_back(str);
    }
    
    sort(v.begin(), v.end(), [](const string& a, const string& b) {
        if (a.size() != b.size()) return a.size() < b.size();
        int sa = digiSum(a);
        int sb = digiSum(b);

        if (sa != sb) return sa < sb;
        if (a != b)return a < b;
        return false;
        

    });

    for (auto& s : v) cout << s << "\n";
    return 0;
}
