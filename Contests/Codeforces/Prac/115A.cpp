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
    int n;cin >> n;

    vi v(n);
    us<int> mem;

    for(int i=0;i<n;i++){cin >> v[i]; mem.insert(v[i]);}

    cout << mem.size() << endl; 
}

int main(){
    std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout << fixed;

    #ifdef INPUT  
        freopen("115A.in","r",stdin);
        clock_t time_req; cout << endl;
    #endif 

    solve();
    
    #ifdef INPUT    
        cout << endl << endl;
        time_req = clock();
        cout << "Processor time taken : " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl << endl; 
    #endif

    return 0;
}

/* 
Heaps: 
    1. make_heap(vector.begin(), vector.end()) 
    2. vector.front() 
    3. vector.psuh_back(); push_back(all(vector))
    4. vector.pop_back(); pop_back(all(vector))
    5. is_heap()
    
Priority Queue / Stack / Queue:  
    1. priority_queue<int> queue_name;
    2. queue_name.push()
    3. queue_name.pop()
    4. queue_name.size();
    5. queue_name.top();
    6. queue_name.is_empty();
*/