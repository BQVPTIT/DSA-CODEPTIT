#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, a[18];

void init(){
    for(int i = 1; i <= n; i++) a[i] = 1; 
}

void now(){
    for(int i = 1; i <= n; i++){
        if(a[i] == 0) cout << 'H';
        else cout << 'A';
    }
    cout << "\n";
}

bool check(){
    if(a[1] != 0 || a[n] != 1) return false;
    for(int i = 1; i <= n; i++){
        if(a[i] == 0 && a[i + 1] == 0) return false;
    }
    return true;
}

void generate(){
    init();
    while(true){
        if(check()) now();
        int i = n;
        while(i >= 1 && a[i] == 0){ 
            a[i] = 1;
            i--;
        }
        if(i < 1) break;
        else a[i] = 0;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        generate();
        cout << "\n";
    }
}