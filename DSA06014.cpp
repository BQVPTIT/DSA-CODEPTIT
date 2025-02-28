#include <bits/stdc++.h>

using namespace std;
#define ll long long

bool nt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return false;
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		bool flag = false;
		for(int i = 2; i < n; i++){
			if (nt(i) && nt(n - i)){
				cout << i << " " << n - i << endl;
				flag = true;
				break;
			}
		}
		if(!flag) cout << -1 << "\n";
	}
}