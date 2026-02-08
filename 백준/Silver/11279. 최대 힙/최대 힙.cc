#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    priority_queue<int> pq;
    int num,n;
    string str;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> n;

        if (n == 0) {
            if (pq.empty()) {
                cout << 0 << '\n';
            }
            else {
                cout << pq.top() << '\n';
                pq.pop();

            }
        }
        else {
            pq.push(n);
        }
    }

    return 0;
}
