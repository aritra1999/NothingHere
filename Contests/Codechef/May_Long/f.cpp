#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long int 
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
    int n, m; 
    cin >> n >> m;
    int count = 0;

    for(int i=n;i>=2;i--){
        int y = m-m%i;
        cout << "Debug: " << y << endl; 
        int tc = 1;
        int j = 1; 

        while(j < i){
            j *= y;

            tc++;
        }

        if(j >= i)tc--;
        count += tc;    
        // for(int j=1;j<i;j++){
        //     if(y%j == 0)count++;
        // }
    }
    
    cout << count << endl;

    // 185
    // 66
    // 78
    // 23
    // 2
    // 3
    // 2    


    // 7
    // 20 5
    // 12 2
    // 13 1
    // 10 22
    // 3 5
    // 3 6
    // 3 10
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    #ifdef INPUT  
        freopen("f.in","r",stdin);
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

