#include<bits/stdc++.h> 

using namespace std; 
#define ll long long

int n; bool chuaxet[11]; 
int a[11];

bool check(string s){ 
	for(int i = 1 ; i <= n - 1; i++){ 
		if(abs((s[i - 1] - '0') - (s[i] - '0')) == 1 ) return false;  
	} 
	return true; 
}
 
void now(){ 
	string s(n, ' ');  
    for(int i = 0; i < n; i++) s[i] = '0' + a[i + 1];
	if(check(s)) cout << s << "\n";  
}

 
void Try(int i){ 
	for(int y = 1 ; y <= n ; y++){ 
		if(chuaxet[y]){ 
			a[i] = y; 
			chuaxet[y] = false; 
			if(i == n) now(); 
			else Try(i + 1);  
			chuaxet[y] = true; 
		} 
	} 
}
			 

int main(){ 
	int t; cin >> t; 
	while(t--){ 
		cin >> n; 
		for(int i = 1 ; i <= n ; i++) chuaxet[i] = true;
		Try(1); 
	} 
} 

