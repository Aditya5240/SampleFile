#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <math.h>

using namespace std;

typedef long double ld;
typedef long long ll;
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        if(n==2){cout<<2<<" " << 1<<endl;}
        else if(n==3){cout<<2<<" " << 1 <<" " << 3 << endl;}
        else{
        cout << 2 << " " << 1 <<" ";
        for(int i = 4; i<=n; i+=2){
            cout << i << " " << i-1 <<" " ;
        }
        if(n%2 != 0){
            cout <<
        }
        cout<<endl;
    }
    }
}
