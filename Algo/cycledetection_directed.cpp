#include <bits/stdc++.h>

using namespace std; 

class G{
	int V; 
	vector<vector<int>>adj; 
	bool isCyclicUtil(int v, vector<bool> visited, vector<bool> recStack);
	public: 
		G(int v);
		void addEdge(int a, int b);
		bool isCyclic();
};

G::G(int V){
	V = V;
    adj.resize(V);
}

void G::addEdge(int a, int b){
	adj[a].push_back(b);
}

bool G::isCyclicUtil(int v, vector<bool> visited, vector<bool> recStack){ 
    if(visited[v] == false){
        visited[v] = true;
        recStack[v] = true;

        for(int x:adj[v]){
        	if(!visited[x] && isCyclicUtil(x, visited, recStack))return true;
        	else if(recStack[x])return true; 
        }
    }

    recStack[v] = false;  
    return false;
}

bool G::isCyclic(){
   	vector<bool> visited(V, false), recStack(V, false);
    
    for(int i = 0; i < V; i++)
        if (isCyclicUtil(i, visited, recStack))
            return true;
 
    return false;
}
 

int main(){
    G g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    g.isCyclic()?cout << "Graph contains cycle" << endl:cout << "Graph doesn't contain cycle" << endl;
	return 0; 
}