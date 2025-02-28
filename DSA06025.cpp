#include <bits/stdc++.h>

using namespace std;
#define ll long long

void insertionSort(int a[], int n){
	for(int i = 0; i <= n - 1; i++){
		int key = a[i], j = i - 1;
		while(j >= 0 && key < a[j]){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
		cout << "Buoc " << i << ": ";
		for(int j = 0; j <= i; j++) cout << a[j] << " ";
		cout << "\n";
	}
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	insertionSort(a, n);
}