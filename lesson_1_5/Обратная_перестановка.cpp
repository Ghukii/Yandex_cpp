#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(vector <int> a, vector<int> b){
    return a[0] < b[0];
}

int main(){
    size_t n;
    cin >> n;
    int k = (int) n;
    vector<vector<int>> a(n, vector<int>(2));

    int x;
    for(int i=0; i < k; i++){
        cin >> x;
        a[i][0] = x;
        a[i][1] = i + 1;
    }

    sort(a.begin(), a.end(), comp);

    for(size_t i = 0; i != n; ++i){
        cout << a[i][1] << " ";
    }
}