#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
#include <unordered_map>
#include <climits>
using namespace std;
 
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    vector<int>v;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);

    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i]<<' ';
    }

    return 0;
}
