#include <string>
#include <iostream>
#include <cctype>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCnt=0,yCnt=0;
   
    
    for(char ch:s){
        ch = tolower(ch);
        if(ch == 'p') pCnt++;
        if(ch == 'y') yCnt++;
    }
    if(yCnt != pCnt){
        answer= false;
    }
    return answer;
}