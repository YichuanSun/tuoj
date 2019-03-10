#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,cnt=0;
    cin>>n;
    for (int i=10;i<=n;i++) {
        int tt=i%10,nw=i/10;
        while (nw&&nw%10<=tt)   {
            tt=nw%10;
            nw=nw/10;
        }
        if (nw==0)  {cnt=1;cout<<i<<endl;}
    }
    if (cnt==0) cout<<-1<<endl;
    return 0;
}
