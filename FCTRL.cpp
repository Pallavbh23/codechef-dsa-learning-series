#include <iostream>
using namespace std;

int trailingZeroes(int n){
    int count = 0;
    int den = 5;
    while(n / den > 0){
        count+= (n/den);
        den = den*5;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<trailingZeroes(n)<<endl;
    }
    return 0;
}