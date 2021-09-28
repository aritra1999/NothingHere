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

vector<int> primeFactors(int n){
    vector<int> pFact;
    while(n%2 == 0){
        pFact.push_back(2);
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2){
        while(n%i == 0){
            pFact.push_back(i);
            n /= i;
        }
    }

    if(n > 2)pFact.push_back(n);

    return pFact;
}


void solve(){
    
    int a, b; 

    cin >> a >> b; 

    vector<int> pFact = primeFactors(a);
    bool check = true;
 
    for(int x:pFact){
        // cout << x << " ";
        if(b%x != 0){
            check = false; 
            break;
        }
    }

    if(check)cout << "YES";
    else cout << "NO";

    cout << endl;
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


