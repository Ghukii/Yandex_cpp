#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;

    int x;
    for(int i=0; i < n; i++){
        cin>>x;
        a.push_back(x);
    }

    
    for(int j = 1; j < n + 1; j++){
        a:
        for(size_t i = 0; i != a.size(); ++i){
            if(a[i] == j){
                cout<< (int) i + 1 << " ";
                j++;
                goto a;
            }
        }
    }
}