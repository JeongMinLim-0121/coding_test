#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>>v(8, vector<int>(8, 0));
    string str;
    int cnt=0;

    for (int i = 0; i < 8; i++) {
        cin >> str;
        for (int j = 0; j < 8; j++) {
            if (str[j] == 'F') {
                v[i][j]++;
            }

        }
    }
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (v[i][j] == 1 && (i + j) % 2 == 0) {
                cnt++;
            }
        }
    }

    cout << cnt;

   
    return 0;
}
