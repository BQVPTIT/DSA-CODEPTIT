#include <iostream>
using namespace std;

int testcase(int N[], int n){
    for(int i = 0; i <= 1000000; i++){
        if (N[i] > n / 2) return i;
    }
    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int inputArray[1000001] = {0};  
        for (int i = 0; i < n; i++) cin >> inputArray[i];
        int countArray[1000001] = {0}; 
        for (int i = 0; i < n; i++) countArray[inputArray[i]]++;  // Tăng số lần xuất hiện
        int result = testcase(countArray, n);  
        if (result == -1) cout << "NO" << "\n";
        else cout << result << "\n";
    }
}
