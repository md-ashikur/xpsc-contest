#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int totalBill = n * x;
        string bill = to_string(totalBill);

        if (bill[0] == '0' || bill.length() != 5)
            cout << "NO" << endl;
        else if (bill.length() == 5)
            cout << "YES" << endl;
    }
    return 0;
}