#include <string>
#include <vector>
#include <cctype>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    vector<int> s;
    s.reserve(3);

    for (int i = 0; i < (int)dartResult.size(); i++) {
        // 점수 파싱 (0~10)
        if (isdigit(dartResult[i])) {
            int num = dartResult[i] - '0';
            if (dartResult[i] == '1' && i + 1 < (int)dartResult.size() && dartResult[i + 1] == '0') {
                num = 10;
                i += 1; 
            }
            s.push_back(num);
            continue;
        }

        // 보너스(S/D/T)
        if (dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T') {
            int p = (dartResult[i] == 'S' ? 1 : (dartResult[i] == 'D' ? 2 : 3));
            s.back() = (int)pow(s.back(), p);
            continue;
        }

        // 옵션(* / #)
        if (dartResult[i] == '*') {
            int m = (int)s.size();
            if (m >= 2) s[m - 2] *= 2;
            s[m - 1] *= 2;
            continue;
        }
        if (dartResult[i] == '#') {
            s.back() *= -1;
            continue;
        }
    }

    int ans = 0;
    for (int x : s) ans += x;
    return ans;
}