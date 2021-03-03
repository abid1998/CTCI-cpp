#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

// O(nlogn + nlogn) 
bool isPermutation1(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

bool isPermutation2(string a, string b) {
    unordered_map<char, int> mp;
    for(char c : a) {
        mp[c]++;
    }
    for(char c: b) {
        mp[c]--;
    }
    for(auto x: mp) {
        if(x.second != 0)
            return false;
    }
    return true;
}


int main() {
    string a, b;
    cin >> a >> b;
    cout << isPermutation1(a, b) << endl;
    cout << isPermutation2(a, b) << endl;
    return 0;
}