#include<bits/stdc++.h>
using namespace std;

#define ui unsigned long long int 
unsigned int find2(unsigned int n) { 
    
    n--; 
    n |= n >> 1; 
    n |= n >> 2; 
    n |= n >> 4; 
    n |= n >> 8; 
    n |= n >> 16; 
    n++; 
    return n; 
}  

ui algo1(ui n){
	ui pow2 = find2(n+1);
    ui ans = 0;

    for(ui i=1;i<pow2;i++){
        if((n^i) <= pow2){
            ans = max(ans, i*(n^i));
        }
    }

    return ans;
}

ui algo2(ui n){
	ull pow2 = find2(n+1)/2;
    return (pow2-1)*(n^(pow2-1));
}

void comp(vector<ui> a, vector<ui> b, ui size){
	ui count = 0;
	for(ui i=0;i<size;i++){
		if(a[i] != b[i]){
			cout << "Mismatch: " << " " << count++ << " " << i+1 << " " << a[i] << " " << b[i] << endl;
		}
	}
}

int main(){
	vector<ui> sola;
	vector<ui> solb;
	ui size = 1000000;
	for(ui i=1;i<=size;i++){
		sola.push_back(algo1(i));
		solb.push_back(algo2(i));
	}

	comp(sola, solb, size);
	return 0;
}