#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
#include <queue>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin >> a;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < a * a; i++) {
        int x;
        cin >> x;
        pq.push(x);
        if ((int)pq.size() > a) pq.pop();
    }

    cout << pq.top();
 
     
    return 0;
}
