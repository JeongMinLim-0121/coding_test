#include <string>
#include <vector>
          
#include <unordered_set>
using namespace std;

string solution(string my_string) {
   string answer = "";
    
   unordered_set<char>ch;
   
    for(char c:my_string){
        if(ch.insert(c).second){
            answer.push_back(c);
        }
      
    }
     
    
    return answer;
}