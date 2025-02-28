#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin>>n>>k;
    	vector<int> a(n);
    	for(int i = 0; i < n; i++) cin >> a[i];
    	int kq = 0;
    	for(int i = 0; i <= n - 2; i++){
        for(int j = i + 1; j <= n - 1; j++){
            if(a[i] + a[j] == k) kq++;
        }
    }
    cout << kq << "\n";
    }
}