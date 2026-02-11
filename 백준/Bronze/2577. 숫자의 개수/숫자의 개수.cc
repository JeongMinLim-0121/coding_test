#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>v(10, 0);
    int A, B, C;
    string sum;
    cin >> A >> B >> C;

    sum = to_string(A*B*C);
    for (char s : sum) {
        v[s - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        cout << v[i] << '\n';
     }

    return 0;
}
