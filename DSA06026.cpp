#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n) {
    int b = 1;  
    for (int i = 0; i <= n - 2; i++) {  
        bool swapped = false; 
        for (int j = 0; j <= n - i - 2; j++) { 
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);  
                swapped = true;  
            }
        }
        if (swapped) {
            cout << "Buoc " << b++ << ": ";  
            for (int j = 0; j < n; j++)  cout << a[j] << " ";
            cout << "\n";
        } 
		else break; 
    }
}

int main() {
    int n; cin >> n;  
    int a[n]; 
    for (int i = 0; i < n; i++) cin >> a[i];  
    bubbleSort(a, n);  
}