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

   
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        string str;
        stack<char> st;
        bool ok = true;

        cin >> str;

        for (char c : str) {
            if (c == '(') {
                st.push(c);
            }
            else { // ')' 일때
                if (st.empty() || st.top() != '(') {
                    ok = false;
                    break;
                   
                }
                st.pop();
            }
        }

        if (!st.empty()) ok = false;
        cout << (ok ? "YES \n" : "NO \n");
    }
  
     

    return 0;
}
