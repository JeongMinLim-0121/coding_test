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
    int n ;
    cin >> n;

    vector<int>dp(n + 1, 0);
    dp[1]=1;
    if (n >= 2) {
        dp[2] = 2;
    }
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }

    cout << dp[n];
   
    return 0;
}
