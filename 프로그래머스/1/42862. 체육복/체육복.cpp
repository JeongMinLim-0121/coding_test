#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> clothes(n+1,1);      //옷이 있는가
    for(int r:reserve) clothes[r]++; //여벌의 옷이 있는가
    for(int l:lost)clothes[l]--;     //잃어 버렸나
    
    for(int i=1;i<=n;i++){
        if(clothes[i] == 0){
            //왼쪽에 학생이 있는지 확인 && 왼쪽 학생이 체육복이 2개인지 확인
            if(i-1>=1 && clothes[i-1]==2){
                clothes[i-1]--;
                clothes[i]++;
            }
            //오른쪽에 학생이 있는지 확인 && 오른쪽 학생이 체육복이 2개인지 확인
            else if(i+1 <=n && clothes[i+1]==2){
                clothes[i+1]--;
                clothes[i]++;
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        if(clothes[i]>=1){
            answer++;
        }
    }
    return answer;
}