#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int Increase[n], Decrease[n];
		for(int i = 0; i < n; i++){
			Increase[i] = a[i];
			for(int j = 0; j < i; j++){
				if(a[i] > a[j]) Increase[i] = max(Increase[i], Increase[j] + a[i]);
			}
		}
		for(int i = n - 1; i >= 0; i--){
			Decrease[i] = a[i];
			for(int j = n - 1; j > i; j--){
				if(a[i] > a[j]) Decrease[i] = max(Decrease[i], Decrease[j] + a[i]);
			}
		}
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum = max(sum, Increase[i] + Decrease[i] - a[i]);
		}
		cout << sum << "\n";
	}
}