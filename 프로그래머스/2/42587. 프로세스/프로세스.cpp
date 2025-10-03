#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int,int>>q;
    priority_queue<int>pq;
    
    for(int i=0;i<priorities.size(); i++){
        q.push({priorities[i],i});
        pq.push(priorities[i]);
    }
    
    int order =0;
    while(!q.empty()){
          auto cur = q.front(); q.pop();
         
        if(cur.first == pq.top()){
            order++;
            pq.pop();
            if (cur.second == location) return order;
        }else{
            q.push(cur);
        }
        
    }
    return -1;
}