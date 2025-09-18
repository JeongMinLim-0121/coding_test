#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    int sum;
    int len = numbers.size();
    
    for(int i=0;i< len; i++){
        sum +=numbers[i];
    }
    answer = (double)sum/len;
    return answer;
}