#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

       long long complete = x * y;
       long long day = z * 24 * 60;

       if(complete <= day)
       cout<<"YES"<<endl;
       else 
       cout<<"NO"<<endl;
    
    }
    return 0;
}