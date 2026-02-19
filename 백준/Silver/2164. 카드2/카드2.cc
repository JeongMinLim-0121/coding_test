#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    queue<int>q;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

   while (q.size() >1) {
        
       q.pop();
       int x = q.front();
       q.pop();
       q.push(x);

   }
   cout << q.front();

    return 0;
}
