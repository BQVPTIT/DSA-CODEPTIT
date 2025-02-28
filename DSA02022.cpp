#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    vector<string> ngay = {"02", "20", "22"};
    vector<string> thang = {"02"};
    vector<string> nam = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
    for(int i = 0; i < ngay.size(); i++){
    	for(int j = 0; j < thang.size(); j++){
    		for(int k = 0; k < nam.size(); k++){
    			cout << ngay[i] + "/" + thang[j] + "/" + nam[k] << "\n";
			}
		}
	}
}