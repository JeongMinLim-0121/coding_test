#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> ans;
    int n = progresses.size();
    
    vector<int> days(n);
    for(int i=0;i<n;i++){
        int remain = 100-progresses[i];
        days[i] = (remain +speeds[i]-1)/speeds[i];
    }
    int cur = days[0],cnt =1;
    for(int i=1; i<n; ++i){
        if (days[i] <= cur) {          
            ++cnt;
        } else {                          
            ans.push_back(cnt);
            cur = days[i];
            cnt = 1;
        }
    }
    ans.push_back(cnt);
    return ans;
}
    
   