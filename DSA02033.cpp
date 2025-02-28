#include <bits/stdc++.h>
using namespace std;

int a[100], n;
bool chuaxet[100];

void now(){
    for(int y = 1; y <= n; y++) cout << a[y];
    cout << "\n";
}

void Try(int i, int preSum){
    for(int y = 1; y <= n; y++){
        if(chuaxet[y] && (i == 1 || abs(preSum - y) != 1)){
            a[i] = y;
            chuaxet[y] = false;
            if(i == n) now();
            else Try(i + 1, y);
            chuaxet[y] = true;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for (int i = 1; i <= n; ++i) chuaxet[i] = true; 
        Try(1, 0);
    }
}