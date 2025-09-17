#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    int len = num_list.size();
    int last = num_list[len-1];
    int prev = num_list[len-2];
    
    if(last <= prev){
        num_list.push_back(last * 2);
    }else {
         num_list.push_back(last - prev);
    }
   
    
    return num_list;
}