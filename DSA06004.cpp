#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, inputArray[100001];
		int countArray[100001] = {0};
		cin >> n >> m;
		for(int i = 0; i <= n + m - 1; i++){
			cin >> inputArray[i];
			countArray[inputArray[i]]++;
		}
		for(int i = 0; i < 100001; i++){
			if(countArray[i] >= 1) cout << i << " ";
		}
		cout << "\n";
		for(int i = 0; i < 100001; i++){
			if(countArray[i] >= 2) cout << i << " ";
		}
		cout << "\n";
	}
}