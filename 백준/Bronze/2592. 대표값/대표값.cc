#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, avg=0,num;
    vector<int> v(100, 0);
    
    for (int i = 0; i < 10; i++) {
        cin >> n;
        avg += n;

        int idx = n / 10;
        v[idx]++;
    }

    //최빈값

    int best = 1;
    int bestCnt = v[1];

    for (int i = 0; i < 100; i++) {
        if (v[i] > bestCnt) {
            bestCnt = v[i];
            best = i;
        }
    }


    num = best * 10;
    avg /= 10;
    cout << avg << '\n' << num;
    return 0;
}
