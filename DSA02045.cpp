#include <bits/stdc++.h>

using namespace std;

int n; string s; 
vector<char> tmp;
vector<vector<char>> res;

void Try(int i){
	for(int j = i; j < s.size(); j++){
		tmp.push_back(s[j]);
		res.push_back(tmp);
		Try(j + 1);
		tmp.pop_back();
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> s;
		sort(s.begin(), s.end());
		Try(0);
		sort(res.begin(), res.end());
		for(int i = 0; i < res.size(); i++){
			for(int j = 0; j < res[i].size(); j++){
				cout << res[i][j];
			}
			cout << " ";
		}
		cout << "\n";
		res.clear();
	}
}
