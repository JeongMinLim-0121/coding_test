#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string s = to_string(a) + to_string(b);
    
    int ab = stoi(s);
    int ab2 = 2*a*b;
    
    if(ab < ab2){
        answer = ab2;
    }else {
          answer = ab;
    }
   
    return answer;
}