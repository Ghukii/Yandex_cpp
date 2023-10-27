#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string pw;

    cin>>pw;

    if(pw.length() < 8  || pw.length() > 14){
        cout<<"NO";
        return 0;
    }

    for(size_t i = 0; i != pw.size(); ++i){
        if(!(33 <= (int) pw[i] && (int) pw[i] <= 126)){
            cout<<"NO";
            return 0;
        }
    }

    int big = 0, small = 0, numbers = 0, spec = 0;

    for(size_t i = 0; i != pw.size(); ++i){
        if(isupper(pw[i])){big = 1;}
        else if(islower(pw[i])){small = 1;}
        else if(isdigit(pw[i])){numbers = 1;}
        else {spec = 1;}
    }

    if(big + small + numbers + spec >= 3){cout<<"YES";}
    else {cout<<"NO";}
}
