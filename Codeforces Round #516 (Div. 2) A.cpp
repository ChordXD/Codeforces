#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 7;
#define ll long long

ll get_gold(ll a,ll b)
{
    ll sum = a*b;
    ll in = (a - 2)*(b - 2);
    //printf("%lld %lld\n",sum,in);
    return sum - in;
}

int main(void)
{

    ll a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    ll ans = 0;
    while(c--)
    {
        ans+=get_gold(a,b);
        a-=4;
        b-=4;
        //printf("%lld\n",ans);
    }
    printf("%lld\n",ans);
    return 0;
}