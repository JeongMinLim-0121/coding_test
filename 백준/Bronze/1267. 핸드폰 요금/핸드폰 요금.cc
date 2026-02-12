#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int ysPrice(int a) {
    int price = 0;
    
    price = (a / 30) * 10;
    if (a % 30 >  0  || a% 30 < 30) {
        price += 10;
    }
    return price;
}
int msPrice(int a) {
    int price = 0;

    price = (a / 60) * 15;
    if (a % 60 > 0 || a % 60 < 60) {
        price += 15;
    }
    return price;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int num, count;
    int ys=0, ms=0;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> count;
        ys += ysPrice(count);
        ms += msPrice(count);
    }
    
     

    if (ys > ms) {
        cout << 'M' << ' ' << ms;
    }
    else if (ys == ms) {
        cout << 'Y' << ' ' << 'M'<<' ' << ys;
    }
    else if(ys < ms){
        cout << 'Y' << ' ' << ys;
    }

     
    return 0;
}
