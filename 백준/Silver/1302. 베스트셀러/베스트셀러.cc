#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m;
	unordered_map<string, int>cnt;

	cin >> m;
	for(int i=0;i<m;i++){
		string book;
		cin >> book;
		++cnt[book];	 

	}

	int best =0;
	string ans;

	for(auto &a:cnt){
		 if(a.second > best){
			best = a.second;
			ans = a.first;
		 }else if(a.second==best && a.first <ans){
			ans = a.first;
		 }
	}

	cout << ans <<'\n';

	return 0;
}