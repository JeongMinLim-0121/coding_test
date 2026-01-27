#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
     
	int t, a, b, sum;

    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << a + b << '\n';
    }

    return 0;
}
