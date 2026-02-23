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
    
    int n,sum=0;
    vector<int>v1;
    vector<int>v2;

    cin >> n;
   
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v1.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        v2.push_back(b);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        sum += v1[i] * v2[i];
    }
    cout << sum;
    return 0;
}
