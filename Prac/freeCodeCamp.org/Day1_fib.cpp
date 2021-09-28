#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n <= 2)return 1;
	return fib(n-1) + fib(n-2);
}
int main(){
	freopen("in.in", "r", stdin);

	int n;
	cout << fib(7);

	cout << endl; 
	return 0;
}