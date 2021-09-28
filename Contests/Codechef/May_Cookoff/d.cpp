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
    int n, k; 
    cin >> n >> k;

    int a[n];   

    ll sum = 0;
    vll sums; 

    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i < k)
            sum += a[i];
    }
    sums.pb(sum);

    for(int i=k;i<n;i++){
        sum = (sum - a[i-k] + a[i]);
        sums.pb(sum);        
    }
    int mx = sums[0];
    int mx_freq = 0;

    um<ll, int> freq;
    for(ll x:sums){
        freq[x]++;

        if(freq[x] > mx_freq){
            mx_freq = freq[x];
            mx = x;
        }
    }

    int count = 0;

    for(auto x:freq){
        if(x.first != mx)count++;
    }
    
    cout << count << endl;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    #ifdef INPUT  
        freopen("d.in","r",stdin);
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

