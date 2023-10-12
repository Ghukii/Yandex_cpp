#include<iostream>
using namespace std;

int main(){
    int n, k;

    cin>>n>>k;

    int t = 1;

    if (n != 1){
        for(int i=1; i < n; i++){
            cout<<"   ";
            t++;
        }
        cout<<" 1";
    }
    else{
        cout<<" 1";
    }

    int i = 2;

    while(i <= k){
        if(t == 7){
            cout<<endl;
            t = 0;
        }
        else{
            cout<<" ";
        }

        if (i >= 2 && i <= 9){
            cout<<' '<<i;
        }
        else{
            cout<<i;
        }

        i++;t++;
    }
}