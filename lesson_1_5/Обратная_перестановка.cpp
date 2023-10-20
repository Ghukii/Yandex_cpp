#include<iostream>
#include<vector>
using namespace std;

void finnd(int x, vector<int> a){
    for(size_t i = 0; i != a.size(); ++i){
        if(a[i] == x)
            cout<< (int) i + 1 << " ";
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> a;

    int x;
    for(int i=0; i < n; i++){
        cin>>x;
        a.push_back(x);
    }

    for(int i = 1; i < n + 1; i++){
        finnd(i, a);
    }
}