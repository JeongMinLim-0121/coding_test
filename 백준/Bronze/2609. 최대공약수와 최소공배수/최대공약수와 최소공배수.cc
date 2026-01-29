#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//최대 공약수
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

//최소 공배수
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int a, b, min = 0, max = 0;
    cin >> a >> b;

    //공약수
    min = gcd(a, b);
    //공배수
    max = lcm(a , b);
    cout << min << '\n' << max;

    return 0;
}
