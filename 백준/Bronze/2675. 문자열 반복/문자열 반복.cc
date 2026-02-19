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
    
    int n, m;
    string s;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m >> s;
        for (char c : s) {
            for (int j = 0; j < m; j++) {
                cout << c;
            }
        }
        cout << "\n";
    }
    
    return 0;
}
