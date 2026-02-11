#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm> 
using namespace std;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num ;
    string str;
    

    cin >> num;
    while (num--) {
        stack<char> lStack, rStack;
        cin >> str;
        
        for (char ch : str) {
            if (ch == '<') {
                if (!lStack.empty()) {
                    rStack.push(lStack.top());
                    lStack.pop();
                }
            }
            else if (ch == '>') {
                if (!rStack.empty()) {
                    lStack.push(rStack.top());
                    rStack.pop();
                }
            }
            else if (ch == '-') {
                if (!lStack.empty()) lStack.pop();
            }
            else {
                lStack.push(ch);
            }
        }
        
        string left, right;

        while (!lStack.empty()) {
            left.push_back(lStack.top());
            lStack.pop();
        }
        
        reverse(left.begin(),left.end());
        
        while (!rStack.empty()) {
            right.push_back(rStack.top());
            rStack.pop();
        }

        cout << left << right << '\n';
       
    }

   
    return 0;
}
