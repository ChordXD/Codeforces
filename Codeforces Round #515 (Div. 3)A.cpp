#include<bits/stdc++.h>
using namespace std;

void solve(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long L,aim,l,r;
        scanf("%lld%lld%lld%lld",&L,&aim,&l,&r);
        long long geshu = L / aim;
        long long ans = 0;
        long long ll = l + (aim - (l % aim));
        if(l % aim == 0)
            ll = l;
        long long rr = r - (r % aim);
        ans = (rr - ll) / aim + 1;
        printf("%lld\n",geshu - ans);
    }
}

int main(void)
{
    solve();
    return 0;
}