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

void solve(){
    
    int n, x;
    cin >> n >> x;
    int temp_max_freq = 0;
    um<int, int> freq1; 
    um<int, int> steps; 

    vector<int> temp;

    for(int i=0;i<n;i++){
        int temp; 
        cin >> temp;
    
        freq1[ temp ]++;
        freq1[ (temp^x) ]++;

        steps[ (temp^x) ]++;
        temp_max_freq = max(max(temp_max_freq, freq1[(temp^x)]), freq1[x]);
    }

    int mx_freq = 0; 

    for(auto x: freq1){
        if(x.)
    }



    // for(auto x: freq1){
    //     cout << x.first TAB x.second << endl;
    //     if(mx_freq < x.second){
    //         mx_freq = x.second;
    //     }
    // }
    // cout << "-------------------------------------" << endl;
    // for(auto x: steps){
    //     cout << x.first TAB x.second << endl;
    // }
        
    // cout << "Max: " << temp_max_freq << endl;

    // if(temp_max_freq == 1){
    //     cout << mx_freq << " " << 0;
        
    // }else{
    //     cout << mx_freq;
    // }

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

