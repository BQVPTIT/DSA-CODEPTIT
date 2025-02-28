#include <bits/stdc++.h>

using namespace std;
#define ll long long

int n, k, a[101];

bool check1(){
	int dem1 = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 1) dem1++;
	}
	if(dem1 == k) return true;
	return false;
}
void init(){
	for(int i = 1; i <= n; i++) a[i] = 0;
}

void now(){
	for(int i = 1; i <= n; i++) cout << a[i];
	cout << "\n";
}

void generate(){
	init();
	while(true){
		if(check1()) now();
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
		cin >> n >> k;
		generate();
		cout << "\n";
	}
}