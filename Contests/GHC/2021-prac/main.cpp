#include<bits/stdc++.h>
using namespace std;
struct ing{
	int size;
	vector<string> tops;
};

struct ans{
	int size;
	vector<int> pizza;
}

int main(){

	freopen("input.in", "r", stdin);

	int n;
	cin >> n;
	int a, b, c;
	cin >> a >> b >> c;

	ing v[n];
	vecotr<ans> sol;

	for (int i = 0; i < n; ++i){
		cin >> v[i].size;
		for(int j = 0;j < v[i].size; j++ ){
			string s;
			cin >> s;
			v[i].tops.push_back(s);
		}
	}

	while(1){
				
	}

	for(auto x:sol){
		cout << x.size << " ";
		for(int y:x.pizza){
			cout << y << " ";
		}
		cout << endl;
	}

	return 0;
}