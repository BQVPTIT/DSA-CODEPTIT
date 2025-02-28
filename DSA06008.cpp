#include <bits/stdc++.h>

using namespace std;
#define ll long long

int demSoCapThoaMan(int x, int Y[], int n, int N[]) {
    if(x == 0) return 0;
    if(x == 1) return N[0];
    int *i = upper_bound(Y, Y + n, x);  
    int ketQua = (Y + n - i) + (N[0] + N[1]);
    if(x == 2) ketQua -= (N[3] + N[4]);
    if(x == 3) ketQua += N[2];
    return ketQua;
}

int dem(int X[], int Y[], int m, int n){
    int N[5] = {0};
    for(int i = 0; i < n; i++){
    	if(Y[i] < 5) N[Y[i]]++;
	}
    sort(Y, Y + n);
    int tongketQua = 0;
    for(int i = 0; i < m; i++){
    	tongketQua += demSoCapThoaMan(X[i], Y, n, N);
	}
    return tongketQua;
}

int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        int m[100000] = {0}, n[100000] = {0};
        for(int i = 0; i < x; i++) cin >> m[i];
        for(int i = 0; i < y; i++)cin >> n[i];
        cout << dem(m, n, x, y) << "\n";
    }
}
