#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin>>t;
	while(t--){
	int n; cin >> n; 
	int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    bool check = false;
    for(int i = 1; i < n; i++){
        if(a[i] != a[0]){
            cout << a[0] << " " << a[i] << "\n";
            check = true;
            break;
        	}
    	}
    if(!check) cout << -1 << "\n";	
	}
}
 