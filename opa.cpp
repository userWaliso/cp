#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

vector<int>f(1000000, 0);

int main() {

        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);

    int n, s;
    cin >> n >> s;
    vector<int>vec(n+1,0);
    vector<int>psum(n+1,0);

    for (int i = 1; i <= n; i++) {
        cin >> vec[i];
        psum[i] = psum[i-1] + vec[i];
    }

    int ans = 0, dif = 0;
    f[0]++;
    for (int i = 1; i <= n; i++) {
        if (psum[i]>=s) {
            dif = abs(s-psum[i]);
            ans += f[dif];
        }
        f[psum[i]]++;
        // cout << psum[i] << endl;
    }

    cout << ans << endl;

}