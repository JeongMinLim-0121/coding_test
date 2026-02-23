#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
 
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m,b,ans;
    vector<int>v;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> b;
        v.push_back(b);

    }
    sort(v.begin(), v.end());
    cout << v[m-1];

    return 0;
}
