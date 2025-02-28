#include <bits/stdc++.h>

using namespace std;
#define ll long long

//sao chep mang a thanh vector, nem vector vao stack

void interchangeSort_Reverse(int a[], int n){
	int end = n - 1;
	stack <vector<int>> mystack;
	for(int i = 0; i <= n - 2; i++){
		for(int j = i + 1; j <= n - 1; j++){
			if(a[i] > a[j]) swap(a[i], a[j]);
		}
		mystack.push(vector<int>(a, a+n));
	}
	while(!mystack.empty()){
		vector<int> a = mystack.top();
		mystack.pop();
		cout << "Buoc " << end-- << ": ";
		for(int j = 0; j < n; j++) cout << a[j] << " ";
		cout << "\n";
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		interchangeSort_Reverse(a,n);
	}
}