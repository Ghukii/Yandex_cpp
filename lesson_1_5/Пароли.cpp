#include<iostream>
#include<string>
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
        int ch = (int) pw[i];

        if(33 <= ch && ch <= 47){spec++;}
        if(48 <= ch && ch <= 57){numbers++;}
        if(58 <= ch && ch <= 64){spec++;}
        if(65 <= ch && ch <= 90){big++;}
        if(91 <= ch && ch <= 96){spec++;}
        if(97 <= ch && ch <= 122){small++;}
        if(123 <= ch && ch <= 126){spec++;}
    }

    if(big >= 3 || small >= 3 || numbers >= 3 || spec >= 3){cout<<"YES";}
    else {cout<<"NO";}
}
