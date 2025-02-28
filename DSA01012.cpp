#include<bits/stdc++.h>

using namespace std;

int n, a[101];

void now(){
	cout << a[0];
	for(int y = 1; y <= n - 1; y++){
		if(a[y - 1] == a[y]) cout << "0";
		else cout << "1";
	}
	cout << " ";
}

void Try_Gray(int i){
	for(int y = 0; y <= 1; y++){
		a[i] = y;
		if(i == n - 1) now(); 
		else Try_Gray(i + 1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Try_Gray(0);
		cout << "\n";	
	}
}
