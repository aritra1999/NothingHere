#include<bits/stdc++.h>
using namespace std;

#define ll long long int 
#define ld long double
#define TAB "\t" << 
#define debug "Debug: " << 

#define us unordered_set
#define um unordered_map
#define ull unsigned long long int 

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
ull find2(ull n) { 
    n--; 
    n |= n >> 1; 
    n |= n >> 2; 
    n |= n >> 4; 
    n |= n >> 8; 
    n |= n >> 16; 
    n++; 
    return n; 
}  

ull solve(ull n){
    ull pow2 = find2(n+1)/2;
    return (pow2-1)*(n^(pow2-1));
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
        ull n;
        cin >> n;
        cout << solve(n) << endl;
    
    }

    #ifdef INPUT
        
        cout << endl << endl;
        time_req = clock();
        cout << "Processor time taken : " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl << endl; 
    #endif
    return 0;
}


