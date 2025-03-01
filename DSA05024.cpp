#include <bits/stdc++.h>

using namespace std;
#define ll long long
const long long mod = 1e9+7;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n+5];
        long long dp[k+5] = {0};
        dp[0] = 1;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 1; i <= k; i++){
            for(int j = 0; j < n; j++){
                if(i >= a[j]) dp[i] = (dp[i] + dp[i - a[j]]) % mod;
            }
        }
        cout << dp[k] << '\n';
    }
}
