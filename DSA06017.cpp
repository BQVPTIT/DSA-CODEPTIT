#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> a(n + m);
		for(int i = 0; i < n + m; i++) cin >> a[i];
		sort(a.begin(), a.end());
		for(int i = 0; i < n + m; i++) cout << a[i] << " ";
		cout << "\n";
	}
}