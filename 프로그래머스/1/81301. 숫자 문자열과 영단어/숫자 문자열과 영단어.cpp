#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string s) {
    vector<string> w = {
        "zero","one","two","three","four","five","six","seven","eight","nine"
    };

    string out;
    string buf;

    for (char ch : s) {
        if (isdigit((unsigned char)ch)) {
            out.push_back(ch);
            continue;
        }

        buf.push_back(ch);

         
        for (int i = 0; i <= 9; i++) {
            if (buf == w[i]) {
                out.push_back(char('0' + i));
                buf.clear();
                break;
            }
        }
    }

    return stoi(out);
}