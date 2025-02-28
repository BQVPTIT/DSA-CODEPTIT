#include <bits/stdc++.h>

using namespace std;
#define ll long long

void selectionSort(int a[], int n){
	for(int i = 0; i <= n - 2; i++){
		int minNow = i;
		for(int j = i + 1; j <= n - 1; j++){
			if(a[minNow] > a[j]) minNow = j;
		}
		swap(a[i], a[minNow]);
		cout << "Buoc " << i + 1 << ": ";
		for(int j = 0; j < n; j++) cout << a[j] << " ";
		cout << "\n";
	}
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	selectionSort(a, n);
}