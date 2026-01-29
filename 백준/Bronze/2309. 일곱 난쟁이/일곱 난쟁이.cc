#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(9);
    int sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> v[i];
        sum += v[i];
    }

    int target = sum - 100;

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (v[i] + v[j] == target) {
                v.erase(v.begin() + j);
                v.erase(v.begin() + i);

                sort(v.begin(), v.end());

                for (int x : v)
                    cout << x << "\n";

                return 0;
            }
        }
    }
}
