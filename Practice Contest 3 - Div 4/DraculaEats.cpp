#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int d = n % 7;

        int wait = n / 7;
 
        if(d>1)
        wait++;

        cout<<wait<<endl;
    
    }
    return 0;
}