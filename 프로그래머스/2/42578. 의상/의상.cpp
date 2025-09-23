#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<vector<string>> clothes) {
   
    unordered_map<string, int>cnt;
    
    for(const auto& item: clothes){
    
        const string& type = item[1];
         
        cnt[type]++;
    }
     long long ways=1;
     for(const auto& kv: cnt){
        ways *=(kv.second+1);
        
     }
    return (int)(ways-1);
}