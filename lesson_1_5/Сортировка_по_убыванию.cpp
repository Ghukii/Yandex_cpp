#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<string> words;
    string word;
    while(cin>>word){
        words.push_back(word);
    }

    sort(words.rbegin(), words.rend());

    for(size_t i = 0; i != words.size(); ++i){
        cout<< words[i] << endl;
    }
}