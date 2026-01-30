#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int a, b, c, mul=0;
    vector<int> cnt(10, 0);

    cin >> a >> b >> c;

    mul = a * b * c;

    while (mul > 0) {
        int digit = mul % 10;
        cnt[digit]++;
        mul /= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << cnt[i] << "\n";

    }

    return 0;
}

