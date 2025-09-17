#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string odd="", even="";
 
    for(int n : num_list){
        if(n%2==0){
            even += to_string(n);
            
        }else{
            odd += to_string(n);
        }
    }
    
    int oddnum = odd.empty() ? 0 : stoi(odd);
    int evennum =even.empty() ? 0 : stoi(even);
    
    return oddnum + evennum;
}