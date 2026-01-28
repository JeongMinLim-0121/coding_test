#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    using namespace std;

    vector<int> v;
    int a;

    for (int i = 0; i < 3; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    cout << v[1] << '\n';
   

    return 0;
}
