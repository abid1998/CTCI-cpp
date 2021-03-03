#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

bool isPalinPermute(string s) {
    vector<int> counter(26, 0);
    for(char c : s)
        counter[c - 'a']++;
    int odd_count = 0;
    for(int i=0; i < counter.size(); i++) {
        if(counter[i] % 2 != 0)
            odd_count++;
    }
    return odd_count <= 1;
}

int main() {
    string s;
    cin >> s;
    cout << isPalinPermute(s) << endl;
    return 0;
}