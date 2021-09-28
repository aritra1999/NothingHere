#include<bits/stdc++.h>

#define TAB << "\t" << 

using namespace std;

int getSum(vector<vector<int>> DP, int p, int q, int r, int s){
    int total = DP[r][s];
    if (q - 1 >= 0) total -= DP[r][q - 1];
    if (p - 1 >= 0) total -= DP[p - 1][s];
    if (p - 1 >= 0 && q - 1 >= 0) total += DP[p - 1][q - 1];
    return total;
}


void solve(){


    int n, m, K;
    cin >> n >> m >> K;

    int a[n+1][m+1];
    int count = 0;
    vector<vector<int>> DP(n+1, vector<int>(m+1, 0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }

    DP[1][1] = a[1][1];
    for(int i=2;i<=m;i++)DP[1][i] = a[1][i] + DP[1][i-1];
    for(int i=2;i<=n;i++)DP[i][1] = a[i][1] + DP[i-1][1];
    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            DP[i][j] = a[i][j] + DP[i][j-1] - DP[i-1][j-1] + DP[i-1][j];
        }
    }

 

    for(int k=1;k <= min(n, m);k++){
        for(int i=k;i<=n; i++){
            for(int j=k;j<=m;j++){
                if(DP[i][j] + DP[i - k][j - k] - DP[i][j - k] - DP[i - k][j] >= K*k*k){
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}

int main (){

    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    #ifdef INPUT  
        freopen("e.in","r",stdin);
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

}

