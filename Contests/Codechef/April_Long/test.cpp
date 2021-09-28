#include<bits/stdc++.h>
using namespace std;


int getSum(vector<vector<int>> DP, int p, int q, int r, int s){
    int total = DP[r][s];
    if (q - 1 >= 0) total -= DP[r][q - 1];
    if (p - 1 >= 0) total -= DP[p - 1][s];
    if (p - 1 >= 0 && q - 1 >= 0) total += DP[p - 1][q - 1];
    return total;
}

int findpos(vector<vector<int>> DP, int left, int right, int k, int K, int i){
    bool check = false; 
    int pos, cen; 

    while(left <= right){
        cen = (left + right)/2;
        if(getSum(DP, i, cen, i+k-1, cen+k-1)/(k*k*1.0) >= K){
            right = cen - 1;
            pos = cen;
            check = true;
        }else{
            left = cen + 1;
        }
    }

    if(check)return pos;

    return -1;
}

void solve(){
    

    int n, m, k;
    cin >> n >> m >> k;
    int A[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> A[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j > 0)
                A[i][j] += A[i][j-1];
        }
    }

    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(i > 0)
                A[i][j] += A[i-1][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << A[i][j] << " ";
        }cout << endl;
    }    

    int ans = 0;

    for(int k=1;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            int left = 0, right = m - k;
            int pos = findpos(DP, left, right, k, K, i);
            // cout << pos << endl;
            if(pos > 0){
                count += (m - k - pos + 1);
            }
        }
    }
    cout << count << endl;
}

int main(){

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



    return 0;
}
