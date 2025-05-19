#include <bits/stdc++.h>
using namespace std;

int main() {
    int cdd = 0;
    string s, t;
    cin >> s >> t; 
    int novoP = (t[0]+1)-(s[0]+1);

    for (int i=0;i<s.size();i++) {
        int parametro = (s[i])+(t[0]);
        if (parametro == t[i]) cdd++;
        else if (t[i] < s[i] && parametro - 122 == t[i]) cdd++; 
    }
    if (cdd == s.size()) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}
