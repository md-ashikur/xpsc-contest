#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
       while (true) {
            if ( n == m ) {
                cout<<"YES"<<endl;
                break;
            } else if (n < m) {
                n += 3;
                m -= 1;
            } else {
                m += 1;
                n -= 1;
            }

            if (n > 100 || m > 100 || n < 1 || m < 1) {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}