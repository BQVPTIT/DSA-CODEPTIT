#include<bits/stdc++.h>

using namespace std;
#define ll long long

int a[101][101], n, m, cnt;


void Try(int i, int j){
    if(i == n && j == m) cnt++;
    else{
        if (i != n) Try(i + 1, j);
        if (j != m) Try(i, j + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
        	for(int j = 1; j <= m; j++) cin >> a[i][j];
		}
        cnt = 0;
        Try(1, 1);
        cout << cnt << "\n";
    }
}