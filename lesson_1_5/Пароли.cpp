#include<iostream>
#include<string>
using namespace std;

int main(){
    string pw;

    cin>>pw;

    bool ASCII = true;

    for(size_t i = 0; i != pw.size(); ++i){
        if(!(33 <= int(pw[i]) <= 126)){
            cout<<"NO";
            return 0;
        }
    }

    int big = 0, small = 0, numbers = 0, spec = 0;
}
