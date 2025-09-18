#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int hc=0,jc=0; //hc:홀, jc:짝
    int len = num_list.size();
    
    for(int i=0;i<len; i++){
        if(num_list[i]%2 ==0){
            jc++;
        }else{
            hc++;
        }
    }
     answer.push_back(jc);
     answer.push_back(hc);
    
    return answer;
}