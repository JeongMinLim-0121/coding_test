#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    int a, sum = 0;

    for (int i = 0; i < 7; i++) {
        cin >> a;
        if (a % 2 == 1) {
            v.push_back(a);
            sum += a;
        }
    }

    if (v.empty()) {
        cout << -1;
        return 0;
    }

    sort(v.begin(), v.end());
    cout << sum << '\n' << v[0];

    return 0;
}
