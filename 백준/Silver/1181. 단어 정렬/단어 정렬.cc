#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;
 
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string s;
    vector<string>v;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        v.push_back(s);
    }
    
    sort(v.begin(), v.end(), [](const string& a, const string& b) {
        if (a.size() != b.size()) return a.size() < b.size();
        return a < b;//사전순
        });

    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i]<<'\n';
    }
    return 0;
}
