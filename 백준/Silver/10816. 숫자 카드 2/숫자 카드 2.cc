#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v1;
    vector<int> v2;
    int a, b ,c,d;
    
    //1. 값을 받기
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        v1.push_back(b);
    }

    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> d;
        v2.push_back(d);
    }

    //2. 각각의 백터 정렬하기
    sort(v1.begin(), v1.end());
 

    //3. 각각 맞게 카운트 하기

    for (int i = 0; i < c; i++) {
        int x = v2[i];
        auto lb = lower_bound(v1.begin(), v1.end(), x);
        auto ub = upper_bound(v1.begin(), v1.end(), x);
        cout << (ub - lb);
        if (i != c - 1) {
            cout << ' ';
        }
    }
    cout << '\n';
    return 0;
}
