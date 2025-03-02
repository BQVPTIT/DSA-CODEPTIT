#include<bits/stdc++.h>

using namespace std;
#define ll long long

int result[101][101][101]; 

int main(){
    int t; cin >> t;
    while(t--){
		int x, y, z; cin >> x >> y >> z;
    	string s1, s2, s3; cin >> s1 >> s2 >> s3;
    	for(int i = 0; i <= x; i++) result[i][0][0] = 0;
    	for(int i = 0; i <= y; i++) result[0][i][0] = 0;
    	for(int i = 0; i <= z; i++) result[0][0][i] = 0;
    	for(int i = 1; i <= x; i++){
        	for(int j = 1; j <= y; j++){
            	for(int k = 1; k <= z; k++){
                	if(s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]) result[i][j][k] = result[i - 1][j - 1][k - 1] + 1;
                	else result[i][j][k] = max(result[i - 1][j][k], max(result[i][j - 1][k], result[i][j][k - 1]));
            	}
        	}
    	}
    cout << result[x][y][z] << "\n";    
	}
}