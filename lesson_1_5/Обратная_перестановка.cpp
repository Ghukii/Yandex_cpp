#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    vector<int> k;

    int x;
    for(int i=0; i < n; i++){
        cin>>x;
        a.push_back(x);
        k.push_back(i + 1);
    }

    for(size_t i = 0; i != a.size(); ++i){
        for(size_t j = 0; j != a.size() - 1; ++j){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                swap(k[j], k[j + 1]);
            }
        }
    }

    for(size_t i = 0; i != a.size(); ++i){
        cout<<k[i]<<" ";
    }


}