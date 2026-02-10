#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const string a, string b){
    return a+b > b+a;
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string>s;
    
    for(int x:numbers)s.push_back(to_string(x));
    
    sort(s.begin(),s.end(),cmp);
        if (s[0] == "0") return "0";
    
    for(const string x: s) answer +=x;
    return answer;
}