#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    for(size_t i = 1; i != s.size(); ++i){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'h' || s[i] == 'i' ||
            s[i] == 'o' || s[i] == 'u' || s[i] == 'w' || s[i] == 'y'){s.erase((int) i, 1); --i;}
    }

    for(size_t i = 1; i != s.size(); ++i){
        if(s[i] == 'b' || s[i] == 'f' || s[i] == 'p' || s[i] == 'v'){s.replace((int) i, 1, "1");}
        if(s[i] == 'c' || s[i] == 'g' || s[i] == 'j' || s[i] == 'k' ||
            s[i] == 'q' || s[i] == 's' || s[i] == 'x' || s[i] == 'z'){s.replace((int) i, 1, "2");}
        if(s[i] == 'd' || s[i] == 't'){s.replace((int) i, 1, "3");}
        if(s[i] == 'l'){s.replace((int) i, 1, "4");}
        if(s[i] == 'm' || s[i] == 'n'){s.replace((int) i, 1, "5");}
        if(s[i] == 'r'){s.replace((int) i, 1, "6");}
    }

    for(size_t i = 2; i != s.size(); ++i){
        if(s[i] == s[i - 1]){
            s.erase((int) i, 1);
            --i;
        }
    }

    int len = s.length();

    if(len < 4){
        for(int i = 0; i < 4 - len;i++){
            s.push_back('0');
        }
    }
    else{
        s.erase(4, len - 4);
    }

    cout<<s<<endl;
}