#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
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
    ll n; 
    cin >> n;
    if(n == 1)cout << 20 << endl;
    else if(n == 2)cout << 36 << endl;
    else if(n == 3)cout << 51 << endl;
    else if(n == 4)cout << 60 << endl;
    else{
        if(n%4 == 0){
            cout << (n/4)*44 + 16 << endl;
        }else if(n%4 == 1){
            cout << (n/4)*44 + 32 << endl;
        }else if(n%4 == 2){
            cout << (n/4)*44 + 44 << endl;
        }else if(n%4 == 3){
            cout << (n/4)*44 + 55 << endl;
        }
    }

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
