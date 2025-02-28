#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int Increase[n], Decrease[n];
        Increase[0] = 1, Decrease[n - 1] = 1;
        for(int i = 1; i < n; ++i){
            if(a[i] > a[i - 1]) Increase[i] = Increase[i - 1] + 1;
            else Increase[i] = 1;
        }
        for(int i = n - 2; i >= 0; i--){
            if(a[i] > a[i + 1]) Decrease[i] = Decrease[i + 1] + 1;
            else Decrease[i] = 1;
        }
        int kq = 0;
        for(int i = 0; i < n; ++i)
            kq = max(kq, Increase[i] + Decrease[i] - 1);
        
        cout << kq << "\n";
    }
}
