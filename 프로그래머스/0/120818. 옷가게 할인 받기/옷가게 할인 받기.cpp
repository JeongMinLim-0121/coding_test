#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
 
     if (price >= 500000) return price * 80 / 100;  // 20% 할인
    if (price >= 300000) return price * 90 / 100;  // 10% 할인
    if (price >= 100000) return price * 95 / 100;  // 5%  할인
    return price;
}