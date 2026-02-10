#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCnt=0,yCnt=0;
    
    for(char str:s){
        if(str =='Y'|| str =='y'){
            yCnt++;
        }else if(str =='P'|| str =='p'){
            pCnt++;
        }
    }
    
   if(pCnt!=yCnt){
       answer = false;
   }
     

    return answer;
}