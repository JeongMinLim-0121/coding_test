#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main(void){

	ios:: sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	unordered_map<string,bool>map;
	vector<string>answer;
	 
	for(int i=0;i<n;i++){

		string name, status;
		cin >> name >> status;
		
		if(status =="enter"){
			map[name] = true;
		}else {
			map[name] = false;
		}
	
	}

	for(auto &a : map){
		if(a.second){
			answer.push_back(a.first);

		}
	}
	sort(answer.begin(), answer.end(), greater<string>());

	for(auto &name : answer){
		cout << name << '\n';
	}

	return 0;
}