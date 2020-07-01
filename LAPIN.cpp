#include <iostream>
#include<string>
using namespace std;

string result(string s, int len){
    int mid = len/2;
    int s1 = 0;
    int s2 = mid;
    if(len%2 != 0){
        s2+=1;
    }
    for(int i = 0; i < mid; i++){
        for(int j = s2; j < len; j++){
            if(s[i] == s[j]){
                s[j] = '-';
                break;
            }
        }
    }
    for(int i = s2; i < len; i++){
        if(s[i] != '-'){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int len = s.length();
        cout<<result(s, len)<<endl;
    }
    return 0;
}