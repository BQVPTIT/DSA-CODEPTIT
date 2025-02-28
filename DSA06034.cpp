#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
    	int a[n];
    	for(int i = 0; i < n; i++) cin >> a[i] ;
    	sort(a, a + n);
    	ll dem = 0;
    	for(int i = 0; i < n ; i++){
        	dem += upper_bound(a + i + 1, a + n, k - a[i]) - lower_bound(a + i + 1, a + n, k - a[i]);
    	}
    cout << dem << "\n";
	}
}