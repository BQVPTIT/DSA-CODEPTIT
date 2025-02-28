#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, sum0 = INT_MAX;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i <= n - 2; i++){
			for(int j = i + 1; j <= n - 1; j++){
				if(abs(a[i] + a[j]) < abs(sum0)){
					sum0 = a[i] + a[j];
				}
			}
		}
		cout << sum0 << "\n";
	}
}