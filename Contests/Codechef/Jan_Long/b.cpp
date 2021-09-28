#include<bits/stdc++.h>
using namespace std;
void solve(){
    string ans = "";
	int n;
    cin >> n;
    string s;
    cin >> s;
    
    for(int i=0;i<n;i+=4){
        int low = 1;
        int high = 16;

        (s[i] == '0')?(high-=8):(low+=8);
        (s[i + 1] == '0')?(high-=4):(low+=4);
        (s[i + 2] == '0')?(high-=2):(low+=2);
        (s[i + 3] == '0')?(high-=1):(low+=1);
        ans += (char)('a' + low - 1);
    }
    cout << ans << endl;

}
int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    #ifdef INPUT  
        freopen("input_b.in","r",stdin);
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

