#include <bits/stdc++.h>

using namespace std;
#define ll long long
int n, a[100] = {0};
bool chuaxet[101];

void now(){
	for(int y = 1; y <= n; y++) cout << a[y];
	cout << " ";
}
void Try(int i){
	for(int y = 1; y <= n; y++){
		if(chuaxet[y]){
			a[i] = y;
			chuaxet[y] = false;
			if(i == n) now();
			else Try(i + 1);
			chuaxet[y] = true;
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n ;
		for(int y = 1; y <= n; y++) chuaxet[y] = true;
		Try(1);
		cout << "\n";
	}
}