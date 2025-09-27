#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

//1620

int main(void){
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int n, m;
    string w;
	cin >> n >> m;
	vector<string>num2name(n+1);		// 순번/이름
    unordered_map<string,int> name2num; // 이름/순번

    for(int i=1;i<=n;i++){
		  string w;
          cin >> w;
          num2name[i]=w;
		  name2num[w]=i;
    }

	for (int i = 0; i < m; i++) {
			string q;
			cin >> q;
		 
			if (isdigit(static_cast<unsigned char>(q[0]))) {
				 
				int idx = stoi(q);
				cout << num2name[idx] << '\n';
			} else {
				 
				cout << name2num[q] << '\n';
			}
		}


 return 0;   
}
