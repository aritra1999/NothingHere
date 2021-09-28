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
#define vp  vector < pair<ll, ll> > 

#define pb push_back
#define all(n) n.begin(),n.end()
#define mem(a,b) memset(a,b,sizeof(a))

#define MOD 1000000007
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
#define MAXSIZE 26

struct Interval{
    int s, e;
};
 
bool mycomp(Interval a, Interval b){ return a.s < b.s; }
 

void solve(){
    ll n, k, f; 
    cin >> n >> k >> f;
    
    ll count = 0; 

    Interval interv[n];

    for(int i=0;i<n;i++){
        cin >> interv[i].s >> interv[i].e;
    }

    int index = 0;
    sort(interv, interv + n, mycomp);

    for(int i=1;i<n;i++){
        if (interv[index].e >=  interv[i].s){
            interv[index].e = max(interv[index].e, interv[i].e);
            interv[index].s = min(interv[index].s, interv[i].s);
        }
        else {
            index++;
            interv[index] = interv[i];
        }   
    }

    for (int i = 0; i <= index; i++){
        count += (interv[i].e - interv[i].s); 
    }
    
    if(f-count >= k)cout << "YES" << endl;
    else cout << "NO" << endl;
    // cout << endl;
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

