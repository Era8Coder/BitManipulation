#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,r;    cin>>l>>r;
    int cnt = 0;
    while(l != r){
        l = l >> 1;
        r = r >> 1;
        cnt++;
    }
    int k = (l<<cnt);
    cout << k << endl;
    return 0;
}