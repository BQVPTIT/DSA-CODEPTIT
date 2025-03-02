#include<bits/stdc++.h> 

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		if(binary_search(a, a + n, k)){
            int pos = lower_bound(a, a + n, k) - a + 1;
            cout << pos << "\n";
        }
		else cout << "NO\n";
	}
}