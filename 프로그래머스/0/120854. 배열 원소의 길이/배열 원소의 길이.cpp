#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
   int len = strlist.size();
    
    for(int i=0;i< len;i++){
        int cnt =0;
       
         answer.push_back(strlist[i].size());
    }
    
    return answer;
}