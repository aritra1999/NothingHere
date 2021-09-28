#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    queue<int> r(n);
    int temp;
    for(int i=0;i<n;i++){
        cin >> temp;
        r.push(temp)
    }

    int m;
    cin >> m;
    queue<int> b(m);

    for(int i=0;i<m;i++){
        cin >> temp;
        d.push(temp);
    }

    ll sum = 0;
    ll sumSoFar = 0;

    while(1){
        
    }
 
}
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    #ifdef INPUT  
        freopen("input.in","r",stdin);
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

