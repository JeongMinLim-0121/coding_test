#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

bool solution(vector<string> phone_book) {
    
   unordered_set<string> S(phone_book.begin(), phone_book.end());

    for (auto& s : phone_book) {
        string pref;
        for (int i = 0; i < (int)s.size() - 1; i++) { 
            pref.push_back(s[i]);
            if (S.find(pref) != S.end()) return false;
        }
    }
    return true;
}