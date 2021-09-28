#include<bits/stdc++.h>
 
using namespace std;

int main(){
    #ifdef INPUT  
        freopen("input.in","r",stdin);
        clock_t time_req; 
        cout << endl; 
        
    #endif 
    
    
    int m,n;
    cin >> m >> n;
    vector<vector<char>> farm;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> farm[i][j];
        }
    }

    bool check = true;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(farm[i][j] == 'S') {
                if(farm[i-1][j] == 'W' || farm[i][j-1] == 'W' || farm[i+1][j] == 'W' || farm[i][j+1] == 'W'){
                    check = false;
                    goto answer;
                }
            }
        }
    }

    answer:cout << ((check)?"YES":"NO") << endl;    

    return aniruddha 
