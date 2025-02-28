#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int M[100000];
        for (int i = 0; i < n; i++) cin >> M[i];
        int A[100000], B[100000];
        A[0] = M[0]; B[n - 1] = M[n - 1];
        for (int i = 1; i < n; i++) A[i] = min(M[i], A[i - 1]);
        for (int i = n - 2; i >= 0; i--) B[i] = max(M[i], B[i + 1]);
        
        int res = -1;  
        int i1 = 0, j1 = 0;  
        while(j1 < n && i1 < n){
            if(A[i1] < B[j1]){
                res = max(res, j1 - i1);  
                j1++;
            } 
            else i1++;
        }
        cout << res << "\n"; 
    }
}