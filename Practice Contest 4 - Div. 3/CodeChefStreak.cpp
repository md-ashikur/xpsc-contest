#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int mxom = INT_MIN;
        int mxaddy = INT_MIN;

        int om = 0, addy = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                om = 0;
            }
            else {
                om++;
            }
            if (b[i] == 0)
            {
                addy = 0;
            }
            else {
                addy++;
            }

            mxom = max(mxom, om);
            mxaddy = max(mxaddy, addy);
        }
       
        if (mxom == mxaddy)
            cout << "Draw" << endl;
        else if (mxom < mxaddy)
            cout << "addy" << endl;
        else
            cout << "om" << endl;
    }

    return 0;
}