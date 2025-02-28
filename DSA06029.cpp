#include <bits/stdc++.h>

using namespace std;
#define ll long long

void insertionSort_Reverse(int a[], int n){
	int end = n - 1;
	stack <vector<int>> mystack;
	for(int i = 0; i <= n - 1; i++){
		int key = a[i], j = i - 1;
		while(j >= 0 && key < a[j]){
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
		mystack.push(vector<int>(a, a+n));
	}
	while(!mystack.empty()){
		vector<int> a = mystack.top();
		mystack.pop();
		cout << "Buoc " << end-- << ": ";
		for(int j = 0; j <= end + 1; j++) cout << a[j] << " ";
		cout << "\n";
	}
}

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	insertionSort_Reverse(a, n);
}