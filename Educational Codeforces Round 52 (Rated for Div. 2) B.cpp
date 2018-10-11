#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double

const int maxn = 1e5 + 7;
ll f[maxn];
int main(void)
{
    for(ll i = 0 ; i < maxn ; i++)
        f[i] = (i*(i-1))/2;
    ll a,b;
    scanf("%lld%lld",&a,&b);
    ll ansn = lower_bound(f,f+maxn,b) - f;
    //printf("%d\n",ansn);
    printf("%lld %lld\n",a - b*2 < 0 ? 0 : a - b*2 ,a - ansn);
    return 0;
}