#include <bits/stdc++.h>

using namespace std;
#define ll long long

void towerofHanoi(int n, char a, char b, char c){
	if(n == 1){
		cout << a << " -> " << c << "\n";
		return;
	}
	towerofHanoi(n - 1,a , c,b);
	towerofHanoi(1, a, b, c);
	towerofHanoi(n - 1, b, a,c );
}

int main(){
	int n; cin >> n;
	towerofHanoi(n, 'A', 'B', 'C');
}

