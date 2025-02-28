#include <bits/stdc++.h>

using namespace std;
#define ll long long

int n, a[101];

void init(){
	for(int i = 1; i <= n; i++) a[i] = n - i + 1;
}

void now(){
	for(int i = 1; i <= n; i++) cout << a[i];
	cout << " ";
}

void generate(){
	init();
	while(true){
		now();
		int i = n - 1;
		int j = i + 1;
		while(i > 0){
			if(a[i] > a[i + 1]) break;
			i--;
		}
		if(i == 0) break;
		else{
			while(a[j] >= a[i]) j--;
			swap(a[i], a[j]);
			reverse(a + i + 1, a + n + 1);
		}
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