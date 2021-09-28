#include<bits/stdc++.h>
using namespace std; 

int dRows[] = {-1, 0 , 1, 0};
int dCols[] = {0, 1, 0, -1};

bool isValid(vector<vector<bool>> visited, int i, int j, int n, int m){
	if(i < n && i >= 0 && j < m && j >= 0 && !visited[i][j])return true; 
	return false; 
}

void BFS(vector<vector<int>> mat, vector<vector<bool>> visited, int i, int j, int n, int m){
	queue<pair<int, int >> q;

	q.push({i, j});
	visited[i][j] = true; 
	
	while(!q.empty()){
		pair<int, int> cell = q.front();
		q.pop();
		int x = cell.first;
		int y = cell.second;

		cout << mat[x][y] << " ";

		if(isValid(visited, x-1, y, n, m)){
			q.push({x-1, y});
			visited[x-1][y] = true; 
		}
		if(isValid(visited, x, y-1, n, m)){
			q.push({x, y-1});
			visited[x][y-1] = true;
		}
		if(isValid(visited, x+1, y, n, m)){
			q.push({x+1, y});
			visited[x+1][y] = true;
		}
		if(isValid(visited, x, y+1, n, m)){
			q.push({x, y+1});
			visited[x][y+1] = true;
		}
	}
}

int main(){
	vector<vector<int>> mat = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } }; 

	vector<vector<bool>> visited(mat.size(), vector<bool> (mat[0].size(), false));
	
	int n = mat.size(); 
	int m = mat[0].size();

	BFS(mat, visited, 0, 0, n, m);
	cout << endl;
	return 0;
} 

// 1   2   3   4 
// 5   6   7   8
// 9   10  11  12
// 13  14  15  16