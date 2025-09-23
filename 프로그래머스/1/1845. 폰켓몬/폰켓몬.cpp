#include <vector>
#include <unordered_map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_map<int, int>cnt;
    
    for(const auto& item  : nums){
         
        cnt[item]++;
    }
    int kind = cnt.size();
    int pick = nums.size()/2;
    return min(kind, pick);
}