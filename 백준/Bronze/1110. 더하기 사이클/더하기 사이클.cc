#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

void slice(int a, int &b, int &c) {

    b = a / 10;
    c = a % 10;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     
    int start;
    cin >> start;

    int x = start;
    int cnt = 0;

    while (true) {
        int b, c;
        slice(x, b, c);

        int sum = c + b;
        int newNum = c * 10 + (sum % 10);

        cnt++;
        x = newNum;

        if (x == start) break;
    }
    cout << cnt;

    return 0;
}

