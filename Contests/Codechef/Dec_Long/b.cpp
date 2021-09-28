#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ld long double
#define TAB << "\t" << 
#define vll vector<ll> 
#define us unordered_set
#define vi vector<int> 
#define pi pair<int,int> 
#define vs vector<string> 
#define vp  vector < pair<int, int> > 
#define pb push_back
#define all(n) n.begin(),n.end()
#define mem(a,b) memset(a,b,sizeof(a))
#define MOD 1000000007
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
#define MAXSIZE 26



int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    #ifdef INPUT  
        freopen("b_input.txt","r",stdin);
        clock_t time_req; 
        cout << endl;
        
    #endif 

    int testCase;
    cin >> testCase;
	
    while(testCase--){
        int n;
        cin >> n;
        int a[n];

        for(int i=0;i<n;i++)
            cin >> a[i];

        for(int i=0;i<n-1;i++){
            int t; 
            for(int j=0;j<n;j++)
                cin >> t;
        }


        ll ans = 0;
        for(int i=1;i<n;i++){
            if(a[i] != (a[i-1] + 1) && a[i] != (a[i-1] + n))
                ans++;
        }

        cout << ((a[n-1] == n)?ans:ans+1) << endl;
    }

    #ifdef INPUT
        
        cout << endl << endl;
        time_req = clock();
        cout << "Processor time taken : " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl << endl; 
    #endif
    return 0;
}

