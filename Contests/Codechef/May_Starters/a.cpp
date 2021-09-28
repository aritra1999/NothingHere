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
    int n;
    cin >> n;
    bool check = true;
    while(n--){
        string s;
        cin >> s;
        
        for(char x:s){
            if((x >= 'A' && x <= 'M') || (x >= 'n' && x <= 'z')){
                check = false;
                break;
            }
        }

        if(check){
            int m = s.size();
            if(s[0] >= 'a' && s[0] <= 'm'){
                // Lang1

                for(int i=1;i<m;i++){
                    if(s[i] >= 'N' && s[i] <= 'Z'){
                        check = false;
                        break;
                    }
                }

            }else if(s[0] >= 'N' && s[0] <= 'Z'){
                // Lang2
                for(int i=1;i<m;i++){
                    if(s[0] >= 'a' && s[0] <= 'm'){
                        check = false;
                        break;
                    }
                }
            }
        }
    }
    
    if(check)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
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


