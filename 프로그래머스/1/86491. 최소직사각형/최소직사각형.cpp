#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 
int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> wight;
    vector<int> hight;
    for(auto &a: sizes){
        int w = a[0];
        int h= a[1];
        
         if(w  < h){
             swap(w,h);
         }
        wight.push_back(w);
        hight.push_back(h);
    }
    sort(wight.begin() ,wight.end(), greater<int>());
    sort(hight.begin() ,hight.end(), greater<int>());
    answer = wight[0] * hight[0] ;
    
    return answer;
}