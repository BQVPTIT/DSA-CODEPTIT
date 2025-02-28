#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int n; cin >> n;
    vector<int> a(n), even, odd;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i % 2 == 0) even.push_back(a[i]);  
        else odd.push_back(a[i]);  
    }
    sort(even.begin(), even.end());  
    sort(odd.begin(), odd.end(), greater<>()); 
    
    int l = 0, r = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) cout << even[l++] << " ";  
        else cout << odd[r++] << " ";  
    }
}