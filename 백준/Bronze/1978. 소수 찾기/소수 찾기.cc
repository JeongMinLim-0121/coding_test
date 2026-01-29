#include <iostream>
#include <string>
#include <vector>
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

    int a, b, cnt=0;
    cin >> a;

    for (int i = 0; i < a; i++) {

        cin >> b;
        if (isPrime(b)) cnt++;

    }

    cout << cnt;

    return 0;
}
