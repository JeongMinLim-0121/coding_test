#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
#include <queue>
using namespace std;

  
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        queue<pair<int, int>>q;
        priority_queue<int>pq;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            q.push({ x,i });
            pq.push(x);
        }
        int cnt=0;
        while (!q.empty()) {
            int priority = q.front().first;
            int idx = q.front().second;
            q.pop();

            if (priority < pq.top()) {
                q.push({ priority ,idx });
            }
            else {
                cnt++;
                pq.pop();
                if (idx == M) {
                    cout << cnt << '\n';
                }
            }
        }
    }

    return 0;
}
