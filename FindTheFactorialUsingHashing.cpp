// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

const int N = 21;
long long fact[N];

void solve() {
    
    int n;
    cin >> n;
    cout << fact[n] << endl;
    
}

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    fact[0] = fact[1] = 1;
    for(int i = 2; i < N; i++) {
        fact[i] = fact[i-1] * i;
    }
    
    int tt = 1;
    cin >> tt;
    
    while(tt--)
    solve();
    
    

    return 0;
}