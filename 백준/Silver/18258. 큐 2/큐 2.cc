#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int>q;
    int num,n;
    string str;

    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> str;

        if (str == "push") {
            cin >> n;
            q.push(n);

        }else if (str == "pop") {
            if (!q.empty()) {
                cout << q.front() << '\n';
                q.pop();
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (str == "size") {
            cout << q.size() << '\n';
             
        }
        else if (str == "empty") {
            if (!q.empty()) {
                cout << 0 << '\n';
                
            }
            else {
                cout << 1 <<'\n';
            }
        }
        else if (str == "front") {
            if (!q.empty()) {
                cout << q.front() << '\n';
               
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (str == "back") {
            if (!q.empty()) {
                cout << q.back() << '\n';
               
            }
            else {
                cout << -1 << '\n';
            }
        }
         
    }
    
    return 0;
}
