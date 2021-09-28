#include<bits/stdc++.h>
using namespace std;

class G{
	int V;
	vector<vector<int>> adj;
	bool isCyclicUtil(int v, vector<bool> visited, int parent);
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
	adj[b].push_back(a);
}

bool G::isCyclicUtil(int v, vector<bool> visited, int parent){
	visited[v] = true;
	for(int x:adj[v]){
		if(!visited[x] && isCyclicUtil(x, visited, v))return true;
		else if(x != parent)return true; 
	}

	return false; 
}

bool G::isCyclic(){
	vector<bool> visited(V, false);
	for(int i=0;i<V;i++){
		if(!visited[i] && isCyclicUtil(i, visited, -1))return true; 
	}

	return false; 
}

int main(){
	G g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(3, 4);

    g.isCyclic()?cout << "Graph contains cycle\n":cout << "Graph doesn't contain cycle\n";
 	
 	return 0;
}
