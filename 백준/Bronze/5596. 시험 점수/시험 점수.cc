#include <iostream>
#include <string>
 
using namespace std;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int score, sumS=0, sumT=0;
     
    for (int i = 0; i < 4; i++) {
        cin >> score;
        sumS += score;
    }
    for (int i = 0; i < 4; i++) {
        cin >> score;
        sumT += score;
    }
    
    if (sumS >= sumT) {
        cout << sumS;
    }
    else {
        cout << sumT;
    }
     
    return 0;
}
