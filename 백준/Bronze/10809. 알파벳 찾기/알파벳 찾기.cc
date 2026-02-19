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
    string str;
    vector<int>v(26,-1);

    cin >> str;
    for (int i = 0; i < (int)str.size(); i++) {
        int idx = str[i] - 'a';
        if (v[idx] == -1) {
            v[idx] = i;
        }
         
    }
    for (int i = 0; i < 26; i++) {
        cout << v[i] << (i == 25 ? '\n' : ' ');
    }

   
    return 0;
}
