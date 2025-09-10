#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int number, int n, int m) {
    int answer = 0;
  //  cin >> number >> n >> m;  
    
 
    if (number % n == 0 && number % m == 0) {
        return 1;
    }
    
    return answer;
}