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
    
    stack<char>st;
    bool intag = false;
    string s;
    getline(cin, s);
   
    for (char c : s) {
        if (c == '<') {
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
            intag = true;
            cout << c;
        }
        else if (c == '>') {
            intag = false;
            cout << c;
        }
        else if (intag) {
            cout << c;
        }
        else {
            if (c == ' ') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                cout << ' ';
            }
            else {
                st.push(c);
            }
        }
    }

    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
   

    return 0;
}
