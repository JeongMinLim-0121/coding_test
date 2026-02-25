#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
#include <queue>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int>v;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    cout << -(v[0] - v[n - 1]);

    return 0;
}
