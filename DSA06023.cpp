#include <bits/stdc++.h>

using namespace std;
#define ll long long

void interChangeSort(int a[], int n){
	for(int i = 0; i <= n - 2; i++){
		for(int j = i + 1; j <= n - 1; j++){
			if(a[i] > a[j]) swap(a[i], a[j]);
		}
		cout << "Buoc " << i + 1 << ": ";
		for(int i = 0; i < n; i++) cout << a[i] << " ";
		cout << "\n";
	}
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	interChangeSort(a,n);
}