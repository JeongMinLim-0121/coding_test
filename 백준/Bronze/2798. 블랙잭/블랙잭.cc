#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,nums,sum=0, max=0;
    cin >> n >> m;
    vector<int>v;
    

    for (int i = 0; i < n; i++) {
        cin >> nums;
        v.push_back(nums);
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {  
            for (int k = j+1; k < n; k++) {
                sum = v[i] + v[j] + v[k];
                if (sum > max && sum <=m) {
                    max = sum;
                }
            }
        }
    }

    cout <<  max;
    
    return 0;
}
