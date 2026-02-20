#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int idx(const string& s){
    if(s=="code") return 0;
    if(s=="date") return 1;
    if(s=="maximum") return 2;
    if(s=="remain") return 3;
    return -1;
}


vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    int ext_idx = idx(ext);
    int sort_idx = idx(sort_by);
    
    for(auto &row : data){
        if(row[ext_idx] < val_ext){
            answer.push_back(row);
        }
    }
    sort(answer.begin(),answer.end(),[&](auto &a, auto &b){
        return a[sort_idx] < b[sort_idx];
    });
    
    return answer;
}