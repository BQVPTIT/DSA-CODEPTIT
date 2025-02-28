#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int check[10] = {0};
		int n; cin >> n;
		for(int i = 0; i < n; i++){
			int a; cin >> a;
			while(a > 0){
				check[a % 10] = 1;
				a/= 10;
			}
		}
		for(int i = 0; i <= 9; i++){
			if(check[i] == 1) cout << i << " ";
		}
		cout << "\n";
	}
}