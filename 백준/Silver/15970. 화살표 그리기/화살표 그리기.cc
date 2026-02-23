#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;
 
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    unordered_map<int, vector<int>>mp;

    for (int i = 0; i < n; i++) {
        int x, c;//위치, 색
        cin >> x >> c;
        mp[c].push_back(x);
    }

    long long ans=0;

    for (auto& kv : mp) {
        auto& v = kv.second;
        sort(v.begin(), v.end());

        int m = v.size();
        for (int i = 0; i < m; i++) {
            int left = (i > 0 ? v[i] - v[i - 1] : INT_MAX);
            int right = (i < m - 1 ?  v[i + 1] - v[i] :  INT_MAX);
            ans += min(left, right);

        }
    }

    cout << ans;
    return 0;
}
