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
    
    cin >> n;
    vector<int>dp(n + 1, 0), score(n + 1,0);

    for (int i = 1; i <= n; i++) cin >> score[i];
   
    if (n >= 1)dp[1] = score[1];
    if (n >= 2)dp[2] = score[1]+score[2];
    if (n >= 3)dp[3] = max(score[1] + score[3], score[2] + score[3]);
    for (int i = 4; i <= n ; i++) {
        dp[i] = max(dp[i - 2] + score[i], dp[i - 3] + score[i - 1] + score[i]);
    }
    cout << dp[n] << '\n';
   
    return 0;
}
