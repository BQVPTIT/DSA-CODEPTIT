#include <bits/stdc++.h>

using namespace std;
#define ll long long

void selectionSort_Reverse(int a[], int n){
	int end = n - 1;
	stack <vector<int>> mystack;
	for(int i = 0; i <= n - 2; i++){
		int minNow = i;
		for(int j = i + 1; j <= n - 1; j++){
			if(a[minNow] > a[j]) minNow = j;
		}
		swap(a[i], a[minNow]);
		mystack.push(vector<int>(a, a + n));
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
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	selectionSort_Reverse(a,n);
}