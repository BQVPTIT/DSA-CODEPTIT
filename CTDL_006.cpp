#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	bool appeared[10001] = {false};	// 4 con 1, 2 con 4,...
	for(int i = 0; i < n; i++){
		if(!appeared[a[i]]){
			cout << a[i] << " ";
			appeared[a[i]] = true;
		}
	}
}