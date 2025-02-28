#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		vector<int> a(k + 1);
		map<int, int> mp;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int i = k;
		while(i > 0){
			if(a[i] < n - k + i) break;
			i--;
		}
		if(i == 0) cout << k;
		else{
			a[i]++;
			for(int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
			int dem = 0;
			for(int i = 1; i <= k; i++){
				if(mp[a[i]] == 0) dem++;
			}
		cout << dem;
		}
		cout << "\n";
	}
}