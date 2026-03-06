#include <vector>
#include <unordered_set>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    unordered_set<int> win(win_nums.begin(), win_nums.end());

    int zeros = 0;
    int match = 0;

    for (int x : lottos) {
        if (x == 0) zeros++;
        else if (win.count(x)) match++;
    }

    auto rank = [](int m) {
        if (m == 6) return 1;
        if (m == 5) return 2;
        if (m == 4) return 3;
        if (m == 3) return 4;
        if (m == 2) return 5;
        return 6;
    };

    int best = rank(match + zeros);
    int worst = rank(match);  

    return {best, worst};
}