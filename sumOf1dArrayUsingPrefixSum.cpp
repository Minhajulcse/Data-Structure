// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

const int N = 1e3 + 10;
int ar[N];
int pf[N];

void solve() {
    
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> ar[i];
        pf[i] = ar[i] + pf[i-1];
    }
    
    int tt = 1;
    cin >> tt;
    while(tt--) {
        int l,r;
        cin >> l >> r;
        
        cout << "Sum of Array["<<l << "] to Array [" << r << "] is : ";
        cout << pf[r] - pf[l-1] << endl;
    }
}

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
    solve();
    
    

    return 0;
}