#include <bits/stdc++.h>

using namespace std;
#define ll long long

void swapMin(int a[], int n){
	int kq = 0;
	for(int i = 0; i <= n - 2; i++){
		int minNow = i;
		for(int j = i + 1; j <= n - 1; j++){
			if(a[minNow] > a[j]) minNow = j;
		}
		if(minNow != i){
			kq++;
			swap(a[i], a[minNow]);
		}
	}
	cout << kq << "\n";
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		swapMin(a,n);
	}
}