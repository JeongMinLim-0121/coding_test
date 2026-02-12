#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>numbers;
    int start, finsh;
   

    for (int i = 0; i <= 20; i++) {
        numbers.push_back(i);
    }
    for (int i = 0; i < 10; i++) {
        
        cin >> start >> finsh;
        reverse(numbers.begin()+start, numbers.begin()+ finsh+1);

    }

    for (int i = 1; i <= 20; i++) {
        cout << numbers[i] << ' ';
    }
  
    return 0;
}
