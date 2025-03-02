#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 3], dp[n + 3] = {};
        for (int i = 1 + 2; i <= n + 2; i++){
            cin >> a[i];
            dp[i] = max(dp[i - 2], dp[i - 3]) + a[i];
        }
        cout << max(dp[n + 2], dp[n + 1]) << "\n";
    }
}
