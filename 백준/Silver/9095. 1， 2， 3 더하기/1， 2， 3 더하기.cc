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
    int n ,m;
    cin >> n;
    
    while (n--) {
        cin >> m;
        vector<int>dp(m + 1, 0);

        if (m >= 1)dp[1] = 1;
        if (m >= 2)dp[2] = 2;
        if (m >= 3)dp[3] = 4;
        for (int i = 4; i <= m; i++) {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        cout << dp[m] << '\n';
    }
   

  
   
    return 0;
}
