#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
     
    int max, price;
    cin >> max;
    for (int i = 0; i < 9; i++) {
        cin >> price;
        max -= price;
    }
    cout << max;

    return 0;
}
