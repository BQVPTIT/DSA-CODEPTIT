#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        queue<ll> q;
        q.push(9);
        while(q.front()%n){
            ll f = q.front();
            q.pop();
            q.push(f*10);
            q.push(f*10+9);
        }
        cout << q.front() << "\n";
    }
}