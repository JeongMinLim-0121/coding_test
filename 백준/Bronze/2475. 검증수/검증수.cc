#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
     
    int n, sum=0, num;
    for (int i = 0; i < 5; i++) {
        cin >> n;

        sum += n*n;
    }
    
    num = sum  %10;
    cout << num;
    

    return 0;
}
