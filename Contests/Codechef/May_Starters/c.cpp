#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define ull unsigned long long int
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
    int n, m, k;
    cin >> n >> m >> k;

    set<int> ans; 

    int freq[n+m+1];
    mem(freq, 0);

    for(int i=0;i<k;i++){
        int t;
        cin >> t;
        freq[t]++;

        if(freq[t] > 1 && t <= n){
            ans.insert(t);
        }
    }

    // for(int i=0;i<=m+n;i++){
    //     cout << i << " -> " << freq[i] << " ";
    // }

    cout << ans.size() << " ";
    for(int x:ans)cout << x << " ";
    cout << endl;
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

