#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int minCandy = INT_MAX;
        int total = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
            minCandy = min(minCandy, a[i]);
        }

        int eaten = 0;
        for (int i = 0; i < n; i++) {
            eaten += a[i] - minCandy;
        }

        cout << eaten << endl;
    }

    return 0;
}
