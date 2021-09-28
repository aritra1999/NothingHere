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
    int x, y;
    string s;
    cin >> x >> y >> s;

    int n = s.size();
    if(s[0] == '?')s[0] = s[1];
    if(s[n-1] == '?')s[n-1] = s[n-2];

    for(int i=0;i<n;i++){
        if(s[i] == '?'){
            if(!s[i-1] || s[i-1] != '?'){
                s[i] = s[i-1];
            }else if(s[i+1] == '?'){
                s[i] = s[i+1];
            }else{
                s[i] = 'J';
            }
        }
    }
    

    int cc = 0;
    int cj = 0;
    
    for(int i=0;i<n-1;i++){
        if(s[i] == 'C' && s[i+1] == 'J')cc++;
        else if(s[i] == 'J' && s[i+1] == 'C')cj++;
    }

    cout << cc*x + cj*y; 
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;

    #ifdef INPUT  
        freopen("b.in","r",stdin);
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