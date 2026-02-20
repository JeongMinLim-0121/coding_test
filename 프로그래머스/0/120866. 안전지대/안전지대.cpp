#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    
    int size=board.size();
   
    vector<int> dx = {-1,-1,-1, 0,0, 1,1,1};
    vector<int> dy = {-1, 0, 1,-1,1,-1,0,1};
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(board[i][j] == 1 ){
                   for(int k=0;k<8;k++){
                       int ni = i+dx[k];
                       int nj = j+dy[k];
                       
                       if(ni>=0 && ni < size && nj>=0 && nj < size){
                           if(board[ni][nj]==0)board[ni][nj] =2;
                       }
                   }
            }
        }
    }
    for(int i=0;i<size;i++){
       for(int j=0;j<size;j++){
           if(board[i][j] ==0) answer++;
       } 
    }
    return answer;
}