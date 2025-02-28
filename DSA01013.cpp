#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string res;
        res += s[0];
        for(int i = 1; i < s.length(); i++) {
			if(s[i] == '1'){
				if(res[i - 1] == '1') res += '0';
				else res += '1';
			} 
			if(s[i] == '0') res += res[i - 1];     
		}
        cout << res << "\n";
    }
}
