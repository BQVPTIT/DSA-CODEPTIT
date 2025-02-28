#include <bits/stdc++.h>

using namespace std;
#define ll long long

int n, a[11];

void init(){
	for(int i = 1; i <= n; i++) a[i] = 0;
}

void now(){
	for(int i = 1; i <= n; i++){
		if(a[i] == 0) cout << 'A';
		else cout << 'B';
	}
	cout << " ";
}

void generate(){
	init();
	while(true){
		now();
		int i = n;
		while(i >= 1 && a[i] == 1){
			a[i] = 0;
			i--;
		}
		if(i < 1) break;
		else a[i] = 1;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		generate();
		cout << "\n";
	}
}