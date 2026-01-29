#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, cnt=0, num=665;
    cin >> N;

    while (cnt < N) {
        num++;
        string s = to_string(num);
        if (s.find("666") != string::npos) {
            cnt++;
        }
    }

    cout << num;
    
    return 0;
}
