#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    bool exit[10]={false};
    
    for(int i:numbers){
         exit[i]=true;
    }
    
    for(int i=0;i<10;i++){
       if(!exit[i]){
           answer += i;
       }
    }
    return answer;
}