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
    string s;
    cin >> n >> k;
    cin >> s;

    int count = 0;

    for(int i=0;i<n/2;i++){
        if(s[i] != s[n-i-1])count++;
    }

    cout << abs(k-count);
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;

    #ifdef INPUT  
        freopen("a.in","r",stdin);
        clock_t time_req; 
        cout << endl;
    #endif 

    int test_case; 
    cin >> test_case;
    for(int temp_test=1;temp_test<=test_case;temp_test++){
        cout << "Case #" << temp_test << ": ";
        solve();
        cout << endl;
    }

    #ifdef INPUT    
        cout << endl << endl;
        time_req = clock();
        cout << "Processor time taken : " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl << endl; 
    #endif

    return 0;
}