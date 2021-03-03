#include <iostream>
#include <set>
#include <vector>
#include <bitset>
using namespace std;

/*
Clarification points ?
1) Is string unicode or ascii.
*/

/*
Method1 :- 
1) Create a bool array 
2) Set the value if not set.
3) If value is already set can return false.

Some optimization:-
1) Using bitset we can reduce space complexity.

Time complexity will be O(n) and space O(1).
*/

bool isUniqueBoolArray(string s) {
    vector<bool> flags(128, false);
    for(char c: s) {
        if(flags[c])
            return false;
        flags[c] = true;
    }
    return true;
}

bool isUniqueBitset(string s) {
    bitset<128> flags;
    for(char c: s) {
        if(flags[c] == 1)
            return false;
        flags[c] = 1;
    } 
    return true;
}

bool isUniqueNormal(string s) {
    set <char> st;
    for(auto c : s) {
        if(st.find(c) != st.end())
            return false;
        st.insert(c);
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    cout << isUniqueNormal(s) << endl;
    cout << isUniqueBoolArray(s) << endl;
    cout << isUniqueBitset(s) << endl;
    return 0;
}