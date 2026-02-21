#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int size = board.size();
    
    int dx[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1,-1, 1,-1, 0, 1};
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(board[i][j] == 1){
                for(int k=0;k<8;k++){
                     int nx = i + dx[k];
                     int ny = j + dy[k];
                    
                    if(nx < size && ny <size  && nx >= 0 && ny >= 0){
                        if(board[nx][ny] == 0)
                            board[nx][ny] = 2;
                    }
                }
               
            }
        }
    }
    
      for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
             if(board[i][j] == 0){
                 answer++;
             }
        }
      }
    return answer;
}