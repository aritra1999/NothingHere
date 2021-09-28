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
    int n = 3;
    char a[3][3];
    int cntx = 0, cnto = 0, cntn = 0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin >> a[i][j];
           if(a[i][j] == 'O')cnto++;
           else if(a[i][j] == 'X')cntx++;
           else cntn++;
        }
    }

    bool x_win = false;
    bool o_win = false;

    for(int i=0;i<n;i++){
        if(a[0][i] == 'X' && a[1][i] == 'X' && a[2][i] == 'X'){x_win = true;break;}
        if(a[i][0] == 'X' && a[i][1] == 'X' && a[i][2] == 'X'){x_win = true;break;}
    }

    if(a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X')x_win = true;
    if(a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X')x_win = true;

    for(int i=0;i<n;i++){
        if(a[0][i] == 'O' && a[1][i] == 'O' && a[2][i] == 'O'){o_win = true;break;}
        if(a[i][0] == 'O' && a[i][1] == 'O' && a[i][2] == 'O'){o_win = true;break;}
    }    

    if(a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O')o_win = true;
    if(a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O')o_win = true;



    if((x_win && o_win) || cntx-cnto < 0 || cntx-cnto > 1)cout << 3;
    else if(cntx == 0 && cnto == 0 && cntn == 9)cout << 2;
    else if(x_win && !o_win && cntx > cnto)cout << 1;
    else if(!x_win && o_win && cntx == cnto)cout << 1;
    else if(!x_win && !o_win && cntn == 0)cout << 1;
    else if(!x_win && !o_win && cntn > 0)cout << 2;
    else cout << 3;

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

