#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int sum =0;
    vector<int> freq;
    
    unordered_map<int,int>cnt;
    for(const auto& item : tangerine){
        cnt[item]++;
    }
    for(const auto& kv : cnt){
        freq.push_back(kv.second);
    }
    sort(freq.begin(), freq.end(),greater<int>());
    
    for(int f: freq){
        sum += f;
        answer++;
        
        if(sum >= k)break;
    }
    
    
    
    return answer;
}