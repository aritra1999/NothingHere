#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n, d, k;
    cin >> n >> d >> k;
    vector<int> a(n);
    long long sum = 0; 
    for(int i=0;i<n;i++){
    	cin >> a[i];
    	sum += a[i];
    }

    if(sum < d)cout << 0 << endl;
    else{
    	if((int)(sum/d) > k)cout << k << endl;
    	else cout << sum/d << endl;
    }
}
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    #ifdef INPUT  
        freopen("input_a.in","r",stdin);
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

