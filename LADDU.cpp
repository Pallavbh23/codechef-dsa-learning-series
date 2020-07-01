#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int ladoos = 0;
        string origin;
        cin>>n>>origin;
        while(n--){
            string curinput;
            int curvalue;
            cin>>curinput;
            if(curinput == "BUG_FOUND"){
                cin>>curvalue;
                ladoos += curvalue;
            }
            else if(curinput == "CONTEST_WON"){
                cin>>curvalue;
                int bonus = 0;
                if (curvalue < 20){
                    bonus = 20 - curvalue;
                }
                ladoos += 300 + bonus;
            }
            else if(curinput == "TOP_CONTRIBUTOR"){
                ladoos += 300;
            }
            else if(curinput == "CONTEST_HOSTED"){
                ladoos += 50;
            }
        }
        if(origin == "INDIAN"){
            cout<<ladoos/200<<endl;
        }
        else{
            cout<<ladoos/400<<endl;
        }
    }
}