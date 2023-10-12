#include<iostream>
using namespace std;

int main(){
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int month, god;

    cin>>month>>god;

    if(((god % 400 == 0 && god % 100 != 0) || (god % 4 == 0 && god % 100 != 0)) && (month == 2)){
        cout<<months[month - 1] + 1;
    }
    else{
        cout<<months[month - 1];
    }
}