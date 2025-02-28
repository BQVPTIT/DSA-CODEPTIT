#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t; 
	while(t--){
	string s; cin>>s;	
	cout << s[0];
	for(int i = 1; i < s.length(); i++){
		if(s[i - 1] == s[i]) cout << '0';
		else cout << '1';
	}
	cout << "\n";	
	}
}