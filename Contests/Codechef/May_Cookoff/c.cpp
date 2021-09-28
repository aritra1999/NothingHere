#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define ld long double
#define TAB << "\t" << 

#define us unordered_set
#define um unordered_map

#define vi vector<int> 
#define vll vector<ll> 
#define vs vector<string> 
#define vp  vector < pair<int, int> > 

#define pb push_back
#define all(n) n.begin(),n.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
#define MAXSIZE 26

void solve(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int n = max(x2,y2);
    int mat[n][n];

    x1--;
    x2--;
    y1--;
    y2--;

    mat[0][0] = 1;

    for(int i=1;i<n;i++){
        mat[0][i] = mat[0][i-1] + i;
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            mat[i][j] = mat[i-1][j] + i + j + 1;
        }
    }

    ll sum = 0;

    for(int i=x1;i<=x2;i++){
        sum += mat[i][y1];
    }


    for(int i=y1+1;i<=y2;i++){
        sum += mat[x2][i];
    }

    cout << sum << endl;

}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    #ifdef INPUT  
        freopen("c.in","r",stdin);
        clock_t time_req;  
        cout << endl;

    #endif 
    int testCase;
    cin >> testCase;
    
    while(testCase--){
        solve();        
    }

    #ifdef INPUT
        
        cout << endl << endl;
        time_req = clock();
        cout << "Processor time taken : " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl << endl; 
    #endif
    return 0;
}

