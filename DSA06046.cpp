#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], kq = INT_MAX;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for(int i = 1; i < n; i++) kq = min(kq, a[i] - a[i - 1]);
		cout << kq << "\n";
	}
}