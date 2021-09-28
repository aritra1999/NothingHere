#include<bits/stdc++.h>
using namespace std;

int main() {

    #ifdef INPUT
        freopen("input.txt", "r", stdin);
        clock_t time_req;
        cout << endl;
    #endif

    int d1, v1, d2, v2, p;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    
    if (d1 == d2)cout << ceil((p * 1.0) / (v1 + v2)) + d1 - 1 << endl;
    else {
        int n = 1;
        int sum = 0;

        do{              
            if (d1 <= n) 
                sum += v1;
            if(sum >= p)break;
            if (d2 <= n) 
                sum += v2;
            n++;

        }while(sum <= p);

        cout << ((sum > p)?n-1:n) << endl;
    }

    return 0;
}
