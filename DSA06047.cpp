#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool pytago(ll a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ll ab = a[i] * a[i] + a[j] * a[j];
            ll c = sqrt(ab); 
            if (c * c == ab) {
                ll *it = lower_bound(a + j, a + n, c);
                if (it != a + n && *it == c) return true;
            }
        }
    }
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a[100005]; 
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a, a + n); 
        if(pytago(a, n)) cout << "YES\n";
        else cout << "NO\n";
    }
}
