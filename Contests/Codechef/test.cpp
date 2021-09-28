#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> v, int m){
	int sum1 = 0, sum2 = 0; 
	int n = v.size();

	for(int i=0;i<m;i++){
		sum1 += v[i];
	}
	for(int i=m;i<n;i++){
		sum2 += v[i];
	}
	cout << "Debug: " << sum1 << " " << sum2 << endl;
	if(sum1 == sum2)return true;
	return false;
}

int main(){

	int n = 7;
	vector<int> v;
	for(int i=1;i<=n;i++){
		v.push_back(i);
	}

	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			cout << "Checking: " << i << " " << j << endl;
			swap(v[i], v[j]);
			if(check(v, i))cout << j << " point: " << i << endl;
			if(check(v, j))cout << i << " point: " << j << endl;
			swap(v[i], v[j]);
		}	
	}



	return 0;
}