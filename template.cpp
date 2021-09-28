#include<bits/stdc++.h>

using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;

#define ll long long int 
#define ld long double
#define TDEV << "\t" << 

#define us unordered_set
#define um unordered_map
#define fi first
#define sc second

#define vi vector<int> 
#define vi vector<vector<int>> 
#define vll vector<ll> 
#define vs vector<string> 
#define vp  vector <pair<int, int>> 

#define rall(n) n.rbegin(),n.rend()
#define all(n) n.begin(),n.end()

#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a))

#define MOD 1000000007
#define MAXSIZE 26 
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;

bool cmp(pair<int, int>& a, pair<int, int>& b)return a.second < b.second;
void solve(){
    
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cout << fixed;
    #ifdef INPUT  
        freopen("115A.in","r",stdin);
        clock_t time_req; cout << endl;
    #endif 

    int test_case; 
    cin >> test_case;
    for(int temp_test=1;temp_test<=test_case;temp_test++){
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
