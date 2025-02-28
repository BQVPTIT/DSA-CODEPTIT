#include <bits/stdc++.h>

using namespace std;
#define ll long long
int n,k, a[100] = {0};

void now(){
	for(int y = 1; y <= k; y++) cout << a[y];
	cout << " ";
}
void Try(int i){
	for(int y = a[i - 1] + 1; y <= n - k + i; y++){
		a[i] = y;
		if(i == k) now();
		else Try(i+1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
		cout << "\n";
	}
}