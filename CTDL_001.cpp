#include <bits/stdc++.h>

using namespace std;
#define ll long long

int n, a[101];

bool doixung(){
	for(int i = 1; i <= n/2; i++){
		if(a[i] != a[n - i + 1]) return false;
	}
	return true;
}

void init(){
	for(int i = 1; i <= n; i++) a[i] = 0;
}

void now(){
	for(int i = 1; i <= n; i++) cout << a[i] << " ";
	cout << "\n";
}

void generate(){
	init();
	while(true){
		if(doixung()) now();
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
	cin >> n;
	generate();
	cout << "\n";
}