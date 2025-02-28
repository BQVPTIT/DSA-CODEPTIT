#include <bits/stdc++.h>

using namespace std;
#define ll long long

int n, maxx;
int val[100], wei[100], x[100];
int xopt[100]; 
int fopt = INT_MIN; 

void cai_tui(){
    int xich_ma = 0, w = 0;
    for(int i = 1; i <= n; i++){
        xich_ma += val[i] * x[i];
        w += wei[i] * x[i];
    }
    if(w <= maxx && xich_ma >= fopt){
        fopt = xich_ma;
        for(int i = 1; i <= n; i++) xopt[i] = x[i];
    }
}

void Try(int index){
    for(int y = 0; y <= 1; y++){
        x[index] = y;
        if(index == n) cai_tui();
        else Try(index + 1);
    }
}

int main(){
    cin >> n >> maxx;
    for(int i = 1; i <= n; i++) cin >> val[i];
    for(int i = 1; i <= n; i++) cin >> wei[i];
    Try(1);
    cout << fopt << "\n";
    for(int i = 1; i <= n; i++) cout << xopt[i] << " ";
}