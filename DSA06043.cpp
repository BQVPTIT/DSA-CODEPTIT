#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int t;cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], f[n], sum = 0;
        cin >> a[0];
        f[0] = a[0];
        sum += a[0];
        for(int i = 1; i < n; ++i){
            cin >> a[i];
            f[i] = f[i - 1] + a[i];
            sum += a[i];
        }
        bool check = false;
        for(int i = 1; i < n; ++i){
            if(f[i] - a[i] == sum - f[i]){
            	check = true;
                cout << i + 1 << "\n";
                break;
            }
        }
        if(!check) cout << -1 << "\n";
    }
}