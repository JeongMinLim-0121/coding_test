#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int i,j,k;
    for(auto& a: commands){
        i=a[0];
        j=a[1];
        k=a[2];
        
        vector<int> sub(array.begin() +(i- 1), array.begin() + j);
        
        sort(sub.begin(), sub.end());
        answer.push_back(sub[k-1]);
    }
    
    
    return answer;
}