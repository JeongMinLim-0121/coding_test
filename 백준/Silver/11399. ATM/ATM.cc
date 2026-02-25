#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
#include <queue>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int num, min, sum = 0 , ans = 0;
    vector<int>v;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> min;
        v.push_back(min);
    }
    
    sort(v.begin(), v.end());
    for (int i = 0; i < num; i++) {
        sum = sum + v[i];
        ans += sum;
    }
    cout << ans;
    return 0;
}
