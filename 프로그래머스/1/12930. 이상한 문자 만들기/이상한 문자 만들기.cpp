#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string s) {
    string answer = "";
    int idx=0;
    
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            idx=0;
            answer +=' ';
        }else{
            if(idx%2==1){
                idx++;
               answer +=tolower(s[i]);
            }else if(idx%2==0){
                idx++;
                 
                 answer +=toupper(s[i]);
            }
                
             
        }
    }
    
     
    return answer;
}