#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    char target = letter[0]; 
    
    for(int i=0;i<my_string.size(); i++){
        if(my_string[i] != target){
            answer.push_back(my_string[i]);
        }
    }
    return answer;
}