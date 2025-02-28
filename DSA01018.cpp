#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> a(k);
        for (int i = 1; i <= k; i++) cin >> a[i - 1]; 
        string s = string(n, '1');
        for (int i = 1; i <= k; i++) s[a[i - 1] - 1] = '0';  
        prev_permutation(s.begin(), s.end());
        for (int i = 1; i <= n; i++) if (s[i - 1] == '0') cout << i << " ";  
        cout << "\n";
    }
}
