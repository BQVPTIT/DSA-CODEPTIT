#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		if(binary_search(a, a+n, x)) cout << 1 << "\n";
		else cout << -1 << "\n";
	}
}