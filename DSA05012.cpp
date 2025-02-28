#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int pascal[1001][1001];

ll combination(int n, int k){
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || j == i) pascal[i][j] = 1;
			else pascal[i][j] = (pascal[i-1][j - 1] + pascal[i - 1][j])%mod;
		}
	}
	return pascal[n][k];
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		cout << combination(n, k) << "\n";
	}
}