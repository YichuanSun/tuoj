#include <bits/stdc++.h>
#define p(n) (int)pow(2,n)
using namespace std;

int ztor(int k);
int rtoz(int k);
int n,m;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k;
    char c;
    cin>>n>>m;
    for (int i=0;i<m;i++)   {
        cin>>c>>k;
        if (c=='Z') cout<<ztor(k)<<endl;
        else if (c=='R')    cout<<rtoz(k)<<endl;
    }
    return 0;
}

int ztor(int k) {
    return 0;
}

int rtoz(int k) {
    k=k-1;
    if (n==0)   return 1;
    int lv=k/p(n-1);
    cout<<"0 lv=  "<<lv<<endl;
    int reb;
    int znum=0;
    int i=1;
    while (i<=n) {
        reb=k%p(2*(n-i));
        znum=lv*p(2*(n-i));
        lv=reb/p(2*(n-i));
        cout<<i<<'\t'<<lv<<'\t'<<reb<<'\t'<<znum<<endl;
        i++;
    }
    return znum;
}
