#include<bits/stdc++.h>
using namespace std;

#define ll long long
class Graph{
    vector<vector<int>> adj;
    vector<bool> visited;
    int V;
public: Graph(int v){
            V = v;
            adj.resize(V);
            visited = vector<bool> (V, false);
        }
        void addEdge(int a, int b){
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        void DFS(int s){
            stack<int> stack; 
            
            stack.push(s);

            while(!stack.empty()){
                int node = stack.top();
                visited[node] = true;
                stack.pop();

                for(int x:adj[node]){
                    if(!visited[x]){
                        stack.push(x);
                    }
                }
            }
        }

        int findRooms(){
            int count = 0;
            for(int i=0;i<V;i++){
                if(!visited[i] && adj[i].size() > 0 ){
                    count++;
                    DFS(i);
                }
            }

            return count;
        }
};

void solve(){
    int n, m;
    cin >> n >> m; 
    char a[n][m];

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    int count = 0;

    Graph g(n*m);
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            if(a[i][j] == '.'){
                if(a[i][j+1] == '#' && a[i+1][j] == '#'){
                    count++;
                }else{
                    if(a[i+1][j] == '.'){
                        g.addEdge(i*m + j, (i+1)*m + j);
                    }
                    
                    if(a[i][j+1] == '.'){
                        g.addEdge(i*m + j, i*m + j + 1);   
                    }
                }
            }
        }
    }

    cout << g.findRooms() + count;
    
}

int main() {
#ifdef INPUT
    freopen("input.in", "r", stdin);
    clock_t time_req;
    cout << endl;
#endif

    solve();


#ifdef INPUT
    cout << endl << endl;
#endif

    return 0;
}



