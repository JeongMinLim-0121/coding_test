#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int>vectorL;
     
    int A, B,a,b;
    cin >> A >> B;

    for (int i = 0; i < A; i++) {
        cin >> a;
        vectorL.push_back(a);
    }


    for (int i = 0; i < B; i++) {
        cin >> b;
        vectorL.push_back(b);
    }
        
    sort(vectorL.begin(), vectorL.end());
   
    for (int i = 0; i < vectorL.size(); i++) {
        cout << vectorL[i] << ' ';
    }
    
    return 0;
}
