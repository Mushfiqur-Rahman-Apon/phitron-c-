#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool canFinish(const vector<ll>& a, ll H, ll K) {
    ll hours = 0;

    for (ll x : a) {
        // ceil(x / K)
        hours += (x + K - 1) / K;

        if (hours > H)
            return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        ll H;
        cin >> N >> H;

        vector<ll> A(N);
        ll mx = 0;

        for (ll &x : A) {
            cin >> x;
            mx = max(mx, x);
        }

        // K must be between 1 and maximum pile size.
        ll low = 1, high = mx;
        ll answer = mx;

        while (low <= high) {
            ll mid = low + (high - low) / 2;

            if (canFinish(A, H, mid)) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}
