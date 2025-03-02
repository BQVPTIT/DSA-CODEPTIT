#include<bits/stdc++.h>

using namespace std;

int n, k, s;
int a[20] = {0};
int dem = 0;

void Try(int i){
	for(int y = a[i - 1] + 1; y <= n - k + i; y++){
		a[i] = y;
		if(i == k){
			int sum = 0;
			for(int j = 1; j <= i; j++) sum += a[j];
			if(sum == s) dem++;
		} 
		else Try(i + 1);
	}
}

int main(){
	while(true){
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;
		dem = 0;
		Try(1);
		cout << dem << "\n";
	}
}
