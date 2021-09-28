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

struct node{
    int weight;
    string name;
};

struct car{
    int size;
    vector<string> path;
};

void solve(){
    int d,ii,s,v,f;
    cin >> d >> ii >> s >> v >> f;

    node street[ii][ii];
    vector<car> cars(v);

    for(int i=0;i<ii;i++){
        for(int j=0;j<ii;j++){
            street[i][j].weight = 0;
            street[i][j].name = "";
        }
    }

    for(int i=0;i<s;i++){ 
        int ta, tb, tw;
        string ts;
        cin >> ta >> tb >> ts >> tw;
        street[ta][tb].weight = tw;
        street[ta][tb].name = ts;
    }

    for(int i=0;i<v;i++){
        cin >> cars[i].size;
        for(int j=0;j<cars[i].size;j++){
            string temp;
            cin >> temp;
            cars[i].path.push_back(temp);
        }
    }

    for(int )



}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    // #ifdef INPUT  
        freopen("b.txt","r",stdin);
        clock_t time_req;  
        cout << endl;

    // #endif 
    // int testCase;
    // cin >> testCase;
	
    // while(testCase--){
        solve();
    // }

    // #ifdef INPUT
        
    //     cout << endl << endl;
    //     time_req = clock();
    //     cout << "Processor time taken : " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl << endl; 
    // #endif
    return 0;
}


  0 1 2
0 1 3 0
1 0 1 0
2 1 0 1