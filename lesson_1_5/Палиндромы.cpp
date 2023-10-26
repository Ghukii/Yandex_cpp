#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s, s1, s2;
    string k;
    while(cin>>k){
        s += k;
    }

    if(s.length() % 2 == 0){
        s1 = s.substr(0, s.length() / 2);
        s2 = s.substr(s.length() / 2, s.length() / 2);
    }
    else{
        s1 = s.substr(0, (s.length() - 1) / 2);
        s2 = s.substr(s.length() / 2 + 1, s.length() / 2);
    }

    reverse(s2.begin(), s2.end());

    bool F = true;
    for(size_t i = 0; i != s1.size(); ++i){
        if (s1[i] != s2[i]){
            F = false;
            break; 
        }
    }

    if (F){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}