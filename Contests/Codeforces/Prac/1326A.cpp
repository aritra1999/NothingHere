#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long int 


int main (){



    int testCase;
    cin >> testCase;

    while(testCase--){
        int n;
        cin >> n;
        if(n == 1)cout << -1 << endl;
        else{
            cout << 2;
            for(int i=0;i<n-1;i++)cout << 3;
            cout << endl;
        }
    }

    return 0;
}