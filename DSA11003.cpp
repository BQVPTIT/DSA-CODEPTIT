#include <bits/stdc++.h>

using namespace std;
#define ll long long

int findRootIndex(int In[], int n, int x){
    for(int i = 0; i < n; i++) {
        if (In[i] == x) return i; 
    }
}

void Duyet(int In[], int n, int Pre[]) {
    int x = findRootIndex(In, n, Pre[0]);
    if (x != 0) Duyet(In, x, Pre + 1);
    if (x != n - 1) Duyet(In + x + 1, n - x - 1, Pre + x + 1);
    cout << Pre[0] << " ";
}

int main(){
    int t; cin >> t;
    while(t--){
        int In[1000], Pre[1000];
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> In[i];
        for(int i = 0; i < n; i++) cin >> Pre[i];
        Duyet(In, n, Pre);
        cout << "\n";
    }
}
