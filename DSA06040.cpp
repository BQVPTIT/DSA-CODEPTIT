#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        vector<ll> a(n1), b(n2), c(n3);
        for(int i = 0; i < n1; i++) cin >> a[i];
        for(int i = 0; i < n2; i++) cin >> b[i];
        for(int i = 0; i < n3; i++) cin >> c[i];

        int i = 0, j = 0, k = 0;
        bool flag = false;

        while(i < n1 && j < n2 && k < n3){
            if(a[i] == b[j] && b[j] == c[k]){
                cout << a[i] << " ";
                flag = true;
                i++, j++, k++;
            } 
			else{
                ll mi = min(min(a[i], b[j]), c[k]);
                if (a[i] == mi) i++;
                if (b[j] == mi) j++;
                if (c[k] == mi) k++;
            }
        }
        if (!flag) cout << -1;
        cout << "\n";
    }
}