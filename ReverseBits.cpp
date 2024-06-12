#include<bits/stdc++.h>
using namespace std;

uint32_t reverse_bits(uint32_t n){                // Return the integer which u will get after reversing the binary form 
    uint32_t result = 0;
    for(int i=0; i<32; i++){
        uint32_t lsb = n&1;              // Take and with 1 to get the "ON" or "OFF" condition of the Last Bit :-)
        uint32_t reverse = lsb<<(31 - i);        // Left shift to the right Most
        result = result|reverse;    // Taking OR with reverse
        n=n>>1;
    }
    return result;
}

int main(){
    uint32_t n;  cin>>n;
    cout << reverse_bits(n) << endl;
    return 0;
}