// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

const int N = 1e3 + 10;
int ar[N][N];
int pf[N][N];

void solve() {
    
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> ar[i][j];
            pf[i][j] = ar[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
        }
    }
    
    int tt = 0;
    cin >> tt;
    while(tt--) {
        
        int a,b,c,d;
        cin >>a >> b >> c >> d;
        cout << "Sum of between ("<<a<<"," <<b<<") to ("<<c<<","<<d<<") is : ";
        cout << pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1] << endl;
    }
    
}

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
    solve();
    
    

    return 0;
}