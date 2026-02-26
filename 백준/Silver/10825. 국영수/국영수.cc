#include <iostream>
#include <string>
#include <vector>

#include <algorithm>
#include <queue>
using namespace std;

struct student {
    string name;
    int kor, eng, math;
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<student> v;
    int n,score;
    string name;
    cin >> n;

    for (int i = 0; i < n; i++) {
        student s;
        cin >> s.name >> s.kor >> s.eng >> s.math;
        v.push_back(s);
         
    }

    sort(v.begin(), v.end(), [](const student& a, const student& b) {
        if (a.kor != b.kor) return a.kor > b.kor;       
        if (a.eng != b.eng) return a.eng < b.eng;       
        if (a.math != b.math) return a.math > b.math;  
        return a.name < b.name;                         
        });

    for (const auto& s : v) {
        cout << s.name << '\n';
    }

 
    return 0;
}
