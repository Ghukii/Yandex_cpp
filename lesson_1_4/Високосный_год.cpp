#include<iostream>
using namespace std;

int main(){
    int god;
    cin>>god;

    if((god % 400 == 0 && god % 100 != 0) || (god % 4 == 0 && god % 100 != 0)){cout<<"YES";}
    else{cout<<"NO";}
}