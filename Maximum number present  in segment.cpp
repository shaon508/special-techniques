#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff first
#define ss second
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
 
    fast;
    int TC=1;
    while(TC--)
    {
        ll n,a,b,maxx=0,one=0;
        cin>>n;
        pair<ll,ll>p[2*n];
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            p[i].ff=a;
            p[i].ss=1;
            p[n+i].ff=b;
            p[n+i].ss=-1;
        }
        sort(p,p+2*n);
        for(int i=0; i<2*n; i++)
        {
            one+=p[i].ss;
            maxx=max(one,maxx);
        }
        cout<<maxx<<endl;
    }
    return 0;
}
