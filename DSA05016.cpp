#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int nt1 = 0, nt2 = 0, nt3 = 0;
		int dp[10001];
		dp[0] = 1;
		for(int i = 1; i <= n - 1; i++) {
			dp[i] = min(dp[nt1] * 2, min(dp[nt2] * 3, dp[nt3] * 5));
			if(dp[i] == dp[nt1] * 2) nt1++;
			if(dp[i] == dp[nt2] * 3) nt2++;
			if(dp[i] == dp[nt3] * 5) nt3++;
		}
		cout << dp[n - 1] << "\n";
	}
}