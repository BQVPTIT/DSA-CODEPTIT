#include<bits/stdc++.h>

using namespace std;
#define ll long long
int a[20], n, k;

void now(){
    for(int i = 1; i <= k; ++i) cout << (char)(a[i] + 'A' - 1);
    cout << "\n";
}

void Try(int i){
    for(int y = a[i - 1] + 1; y <= n - k + i - 1; y++){
        a[i] = y;
        if(i == k) now();
        else Try(i + 1);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        n++;
        Try(1);
        cout << "\n";
    }
}