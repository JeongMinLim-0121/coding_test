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

	int  N,M;
	unordered_map<string, string>map; //주소 , 비번
	cin >> N >> M;

	for(int i=0; i<N;i++){
		string josu, pwd;
		cin >> josu >> pwd;
		map[josu] =pwd ;
	}
 

	for(int i=0;i<M; i++){
		string findJosu ,findPwd;
		cin >> findJosu;

		cout << map[findJosu] << '\n';
	}


	return 0;
}