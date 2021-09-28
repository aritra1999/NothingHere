#include<bits/stdc++.h>
using namespace std;

class Graph{
	int V; 
	vector<vector<int>> adj;
public:
	Graph(int V);
	void addEdge(int a, int b);
	void BFS(int start);
	void DFS(int start);
};	

Graph::Graph(int V){
	V = V;
	adj.resize(V);
}

void Graph::addEdge(int a, int b){
	adj[a].push_back(b);
	adj[b].push_back(a);
}

void Graph::BFS(int start){
	queue<int> q;
	vector<bool> visited(V, false);

	q.push(start);
	visited[start] = true; 
	while(!q.empty()){
		int node = q.front();
		cout << node << " ";
		q.pop();
		for(int x:adj[node]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

void Graph::DFS(int start){
	stack<int> s; 
	vector<bool> visited(V, false);

	s.push(start);
	visited[start] = false; 
	while(!s.empty()){
		int node = s.top();
		cout << node << " ";
		s.pop();
		for(int x:adj[node]){
			if(!visited[x]){
				s.push(x);
				visited[x] = true;
			}
		}
	}

}

int main(){
	Graph g(5);
	g.addEdge(0, 2);
	g.addEdge(2, 1);
	g.addEdge(4, 3);
	g.addEdge(2, 4);
	g.addEdge(3, 1);
	g.addEdge(0, 4);
	
	g.BFS(0);
	cout << endl;
	g.DFS(0);
	return 0;
}
