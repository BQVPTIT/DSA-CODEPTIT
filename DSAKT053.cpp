#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		string n, m; cin >> n >> m;
		int dp[1001][1001] = { 0 };
		for(int i = 1; i <= n.length(); i++){
			for(int j = 1; j <= m.length(); j++){
				if(n[i - 1] == m[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
				else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
		cout << dp[n.length()][m.length()] << "\n";
	}
}