#include <bits/stdc++.h>

using namespace std;
#define ll long long

bool ktra(ll a[], int n, int k){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(binary_search(a + j + 1, a + n, k - a[i] - a[j])) return true;  
        }
    }
    return false; 
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        ll a[100001];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);  
        if(ktra(a, n, k)) cout << "YES\n";
        else cout << "NO\n";
    }
}
