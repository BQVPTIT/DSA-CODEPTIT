#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;  
    while (t--) {
        int n; cin >> n;  
		int inputArray[1000001] = {0};  
		for(int i = 0; i < n; i++) cin >> inputArray[i];
        int countArray[3] = {0};  
        for (int i = 0; i < n; i++) {
            countArray[inputArray[i]]++;
        }
        for (int i = 0; i < countArray[0]; i++) cout << 0 << " ";  
        for (int i = 0; i < countArray[1]; i++) cout << 1 << " ";  
        for (int i = 0; i < countArray[2]; i++) cout << 2 << " ";  
        cout << "\n";
    }
}
