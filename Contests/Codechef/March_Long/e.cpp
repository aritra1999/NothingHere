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
    int n, a, b, c, e, h;
    cin >> n >> e >> h >> a >> b >> c;

    ll price = 0;

    if(a > b && b > c){
        if(b > c){
            // a > b > c
            while(e >= 0  && h >= 0){
                
            }
        }else{
            // a > c > b
        }
    }else if(b > a && b > c){
        if(a > c){
            // b > a > c
        }else{
            // b > c > a
        }
    }else if(c > a && c > b){
        if(a > b){
            // c > a > b
        }else{
            // c > b > a
        }
    }else{
        // a = b = c
        if(e == h){
            price = e*a;
        }else{

        }
    }

    cout << price << endl; 
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

