#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        map<int,int> mp;
        for(int i = 0; i < n; i++){
        	mp[a[i]]++;
		} 
        bool flag = false;
        for(int i = 0; i < n; i++){
        	if(mp[a[i]] >= 2){
        		flag = true;
        		cout << a[i] << "\n";
        		break;
			}
		}
        if(!flag) cout << "NO\n";
    }
}