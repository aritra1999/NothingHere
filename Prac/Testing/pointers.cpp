#include<bits/stdc++.h>
#define n 5
using namespace std;

int main(){
	int a[];
	
	// for(int i=0;i<n;i++){
	// 	cin >> a[i];
	// }

	// for(int i=0;i<n;i++){
		// cout << a[i] << " "; 
		// cout << *ptr++ << " ";
	// }

	cout << "Enter: ";
	int *ptr = a;

	for(int i=0;i<n;i++){
		cin >> *ptr++;
	}

	for(int *ptr=a;*ptr<=n;*ptr++){
		cout << *ptr << " ";
	}


	return 0;
}