#include <iostream>

using namespace std;
#define ll long long

int n, k, a[1001], b[1001], cnt;

void now(int m){
    for (int y = 1; y <= m; ++y) {
        if (b[y] == 1) cout << a[y] << " ";
    }
    cout << "\n";
    cnt++;
}

void Try(int i, int preSum){
    for (int y = 0; y <= 1; y++){
        b[i] = y;
        if (preSum + a[i] * y == k) now(i);
        else if (i < n) Try(i + 1, preSum + a[i] * y);
    }
}

int main(){
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    Try(1, 0);  
    cout << cnt;
}
