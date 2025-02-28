#include<bits/stdc++.h>

using namespace std;
#define ll long long

int n, cnt;
int num[20] = {};

void now(int i){
    cout << "(";
    for(int y = 1; y < i; y++) cout << num[y] << " ";
    cout << num[i] << ") ";
}

void Try(int i){
    for(int y = num[i - 1]; y >= 1; y--){
        num[i] = y;
        n = n - y;
        if(n == 0){
            cnt++;
            now(i);
        } 
		else if(n > 0) Try(i + 1);
        n = n + y;
    }
}

int main(){
    int a; cin>>a;
    while(a--){
	cnt = 0;
    cin >> n;
    num[0] = n;
    Try(1);
    cout << "\n";    
	}
}
