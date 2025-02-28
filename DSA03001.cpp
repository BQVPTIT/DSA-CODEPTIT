#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int a[] = {1000,500,200,100,50,20,10,5,2,1};
	int t; cin >> t;
	while(t--){
		int s; cin >> s;
		int cnt = 0;
		for(int i = 0; i < 10; i++){
			while(s - a[i] >= 0){
				s = s - a[i];
				cnt++;
			}
		}
		cout << cnt << "\n";
	}
}