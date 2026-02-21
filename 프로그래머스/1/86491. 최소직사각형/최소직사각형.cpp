#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int maxlong=0,maxshort=0;
    
    for(auto &s:sizes){
        
        int a = s[0];
        int b = s[1];
        
        int longer=max(a,b);
        int shorter=min(a,b);
        
        maxlong = max(longer,maxlong);
        maxshort = max(shorter,maxshort);
        
    }
    answer=maxlong*maxshort;
    return answer;
}