#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    deque<int> q;
    int num,n;
    string str;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> str;
        if (str == "push_front") {
            cin >> n;
            q.push_front(n);
        }
        else if (str == "push_back") {
            cin >> n;
            q.push_back(n);
            
        }
        else if (str == "pop_front") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.front() << '\n';
                q.pop_front();
            }
        }
        else if (str == "pop_back") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.back() << '\n';
                q.pop_back();
            }
        }
        else if (str == "size") {
            cout << q.size() << '\n';
        }
        else if (str == "empty") {
            if (q.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (str == "front") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.front() << '\n';
            }
        }
        else if (str == "back") {
            if (q.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << q.back() << '\n';
            }
        }
    }
     
    return 0;
}
