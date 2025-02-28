#include <bits/stdc++.h>

using namespace std;
#define ll long long

int n, s, a[31];
bool flag = false;

void Try(int i, int preSum = 0, int cnt = 0){
    if(preSum == s){
        flag = true;
        cout << cnt << "\n";
    } 
    else{
        for(int j = i; j <= n; j++){
    	if(!flag) Try(j + 1, preSum + a[j], cnt + 1);
		}
    }
}

int main() {
    cin >> n >> s;
    for(int i = 1; i <= n; ++i) cin >> a[i]; 
    sort(a + 1, a + 1 + n, greater<int>());
    flag = false;
    Try(1);
    if(!flag) cout << -1 << "\n";
}