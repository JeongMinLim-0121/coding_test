#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
using namespace std;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<char>stL, stR;
    string str;
    int num;
    char cmd, ch;

    cin >> str;
    cin >> num;
    for (char c : str) {
        stL.push(c);
    }
    for (int i = 0; i < num; i++) {
        cin >> cmd;
        if (cmd == 'L') {
            if (!stL.empty()) {
                stR.push(stL.top());
                stL.pop();
            }
        }
        else if (cmd == 'D') {
            if (!stR.empty()) {
                stL.push(stR.top());
                stR.pop();
            }

        }
        else if (cmd == 'B') {
            if (!stL.empty()) {
                stL.pop();
            }
        }
        else if (cmd == 'P') {
            cin >> ch;
            stL.push(ch);
        }
    }
    
    while (!stL.empty()) {
        stR.push(stL.top());
        stL.pop();
    }
    while (!stR.empty()) {
        cout << stR.top();
        stR.pop();
    }

    return 0;
}
