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
int add(int n){
    return (n*(n+1))/2;
}
void solve(){
    int m,n;
    cin >> n >> m;
    int a[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == 1){
                int cl = 0;
                int cr = 0;
                int cd = 0;
                int ct = 0;

                for(int k=j;k>=0;k--){
                    if(a[i][k] == 1)cl++;
                    else break;
                }
                for(int k=j;k<m;k++){
                    if(a[i][k] == 1)cr++;
                    else break;   
                }
                for(int k=i;k>=0;k--){
                    if(a[k][j] == 1)ct++;
                    else break;   
                }
                for(int k=i;k<n;k++){
                    if(a[k][j] == 1)cd++;
                    else break;      
                }

                if(ct > 1){
                    if(cr > 1){
                        int mx = max(ct, cr);
                        int mn = min(ct, cr);

                        if((mx/2) <= mn){
                            count += add(mx/2)-1;
                            cout << "Adding 1" << endl;
                        }else{
                            count += mn - 1;
                            cout << "Adding 2" << endl;
                        }
                    }
                    if(cl > 1){
                        int mx = max(ct, cl);
                        int mn = min(ct, cl);

                        if((mx/2) <= mn){
                            count += add(mx/2)-1;
                            cout << "Adding 3" << endl;
                        }else{
                            count += mn - 1;
                            cout << "Adding 4" << endl;
                        }
                    }
                }

                if(cd > 1){
                    if(cr > 1){
                        int mx = max(cd, cr);
                        int mn = min(cd, cr);

                        if((mx/2) <= mn){
                            count += add(mx/2)-1;
                            cout << "Adding 5" << endl;
                        }else{
                            count += mn - 1;
                            cout << "Adding 6" << endl;
                        }
                    }
                    if(cl > 1){
                        int mx = max(ct, cl);
                        int mn = min(ct, cl);

                        if((mx/2) <= mn){
                            count += add(mx/2)-1;
                            cout << "Adding 7" << endl;
                        }else{
                            count += mn - 1;
                            cout << "Adding 8" << endl;
                        }
                    }
                }
            }
        }
    }

    cout << count;

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
        // cout << "Case #" << temp_test << ": ";
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