#include <bits/stdc++.h>

using namespace std;
#define ll long

string s;
int n;
char a[2] = {'6', '8'};

bool check(){
    int cnt6 = 0, cnt8 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '6'){
            ++cnt6;
            cnt8 = 0;
        }
        else{
            ++cnt8;
            cnt6 = 0;
        }
        if(cnt6 > 3 || cnt8 >= 2) return false;
    }
    return true;
}

void now(){
    if(check()) cout << s << "\n";
}

void Try(int i){
    for(int y = 0; y <= 1; y++){
        s[i] = a[y];
        if(i == n) now();
        else Try(i + 1);
    }
}

int main(){
        cin >> n;
        s = string(n, '1');
        s[0] = '8';
        s[n - 1] = '6';
		n = n - 2;
        Try(1);
}

