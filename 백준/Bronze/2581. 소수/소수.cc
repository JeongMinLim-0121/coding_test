#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


bool isPrime(int n) {
    if (n <= 1)return false;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector <int>v;
    int a, b,sum=0;
    cin >> a >> b;

    for (int i = a; a <= b; a++) {
        if (isPrime(a)) {
            v.push_back(a);
            sum += a;
        }
    }
    if (v.empty()) {
        cout << -1;
        return false;
    }
    else {
        sort(v.begin(), v.end());
    }
    cout << sum << '\n' << v[0];

    return 0;
}
