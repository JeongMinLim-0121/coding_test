#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>

using namespace std;
// mm:ss -> ss
int tosec(const string& time) {
    int mm , ss; 
    char colon;
    stringstream ssin(time);
    ssin >> mm >> colon >> ss;
    return mm * 60 + ss;

}

// ss -> mm:ss
string toTIme(int timeSS ) {
   int min = timeSS / 60;
   int sec = timeSS % 60;

   stringstream ssout;
   ssout << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec;
   return ssout.str();
}

//skip
int skip(int changeTime, int opEnd,int opStart) {
   
    if (changeTime <= opEnd && changeTime >= opStart) {
        changeTime = opEnd;
      //  cout << " skip 바뀐시간 : " << changeTime << endl;
    }
    return changeTime;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";
    int videoLen = tosec(video_len);
    int pos_s = tosec(pos);
    int opStart = tosec(op_start);
    int opEnd = tosec(op_end);
    int changeTime = pos_s;


    changeTime = skip(changeTime, opEnd, opStart);

    for (string cmd : commands) {
        
        if (cmd == "next") {
            int plus = changeTime + 10;
            if (plus > videoLen) {
                changeTime = videoLen;
            }
            else {
                changeTime += 10;
            }

            changeTime =  skip(changeTime, opEnd, opStart);
         //   cout << "next : " << changeTime << endl;
        }
        else if (cmd == "prev") {
            int minus = changeTime-10;
            if (minus < 0) {
                changeTime = 0;
            }else{
                changeTime -= 10;
            }
            changeTime = skip(changeTime, opEnd, opStart);
         //   cout << "prev : " << changeTime << endl;
        }

    }
    return  toTIme(changeTime);
}

