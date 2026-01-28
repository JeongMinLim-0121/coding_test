#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v;
    int a, b,  sum = 0;
    cin >> a;

    for (int i = 0; i < a; i++) {
        for (int i = 0; i < 7; i++) {
            cin >> b;
            if (b % 2 == 0) {
                v.push_back(b);
                sum += b;
            }
        }
        sort(v.begin(), v.end());
        cout << sum << ' ' << v[0] << '\n';
        sum = 0;
        v.clear();

    }

    return 0;
}
