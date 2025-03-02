#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

ll partial_permutation(ll n, ll k){
    if(k > n) return 0; 
    ll res = 1; 
    for(ll i = n - k + 1; i <= n; i++) res = (res * i) % mod; 
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        cout << partial_permutation(n, k) << "\n"; 
    }
}
