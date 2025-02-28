#include <bits/stdc++.h>

using namespace std;
#define ll long long

int n, cnt;
int num[20] = {};
vector<string> results;

void now(int i){
    stringstream ss;
    ss << "(";
    for(int y = 1; y < i; y++) ss << num[y] << " ";
    ss << num[i] << ")";
    results.push_back(ss.str());
}

void Try(int i, int sum){
    for(int y = num[i - 1]; y >= 1; y--){
        num[i] = y;
        int newSum = sum + y;
        if (newSum == n){
            cnt++;
            now(i);
        } 
		else if(newSum < n) Try(i + 1, newSum);  
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cnt = 0;
        cin >> n;
        num[0] = n;
        Try(1, 0);
        cout << cnt << "\n";  
        for(int i = 0; i < (int)results.size(); i++) cout << results[i] << " ";
        results.clear();  
        cout << "\n";  
    }
}
