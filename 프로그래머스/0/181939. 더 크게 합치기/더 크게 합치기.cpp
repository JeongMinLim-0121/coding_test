#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string ab_s = to_string(a) + to_string(b);
    string ba_s = to_string(b) + to_string(a);
    
    int ab = stoi(ab_s);
    int ba = stoi(ba_s);
    
    if(ab < ba){
        answer = ba;
    }else {
         answer = ab;
    }
    
    return answer;
}