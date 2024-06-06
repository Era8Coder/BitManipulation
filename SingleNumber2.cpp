/*
    Every Number occurs thrice except one find that number :_
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin>>n;
    vector<bitset<32>> v;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(bitset<32>(x));
    }
    // for(int i=0; i<n; i++){
    //     cout << v[i] << endl;
    // }
    bitset<32> ans(0);
    for(int i=0; i<32; i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            if(v[j][i]){
                sum++;
            }
        }
        if(sum%3 != 0){
            ans[i] = 1;
        }
    }
    cout << ans.to_ulong() << endl;
    return 0;
}