#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack <string> mystack;
		for(int i = 0; i < s.size(); i++){
			if(s[i] >= 'a' && s[i] <= 'z') mystack.push(string(1, s[i]));
			else {
				string a = mystack.top(); 
				mystack.pop();
				string b = mystack.top(); 
				mystack.pop();
				mystack.push( b + s[i] + a);
			}
		}
		cout << mystack.top() << "\n";
	}
}