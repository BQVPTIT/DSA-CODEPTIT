#include <bits/stdc++.h>
using namespace std;

void bubbleSort_Reverse(int a[], int n) {
    stack<vector<int>> mystack;
    for(int i = 0; i <= n - 2; i++) {
        bool swapped = false;
        for (int j = 0; j <= n - i - 2; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if(swapped){
            mystack.push(vector<int>(a, a + n));  
        }
		else break;  
    }
    int x = mystack.size();
    while(!mystack.empty()){
        vector<int> a = mystack.top();  
        mystack.pop();
        cout << "Buoc " << x-- << ": ";  
        for (int j = 0; j < n; j++) cout << a[j] << " ";
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        bubbleSort_Reverse(a, n);
    }
}