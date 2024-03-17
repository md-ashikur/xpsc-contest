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
        unordered_map<int, int> freq;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int ans = -1;
       
        for (auto f : freq)
        {
          if(f.second>=3){
            ans = f.first;
            break;
          }
        }

       cout << ans << endl;
    }

    return 0;
}