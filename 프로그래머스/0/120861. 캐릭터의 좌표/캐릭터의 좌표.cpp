#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
   int x=0,y=0;
    
   int xMax = board[0]/2;
   int yMax = board[1]/2;
    
    for(int i=0;i<keyinput.size();i++){
        if(keyinput[i]=="left" && x >-xMax){
              x--;
        }else if(keyinput[i]=="right"&& x < xMax){
             x++;
        }else if(keyinput[i]=="down"&& y > -yMax){
             y--;
        }else if(keyinput[i]== "up"&& y < yMax){
              y++;
        }
    }
    
    
    return {x,y};
}