#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define db double

const int maxn = 1e6 + 7;

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll s,a,b,c;
        scanf("%lld%lld%lld%lld",&s,&a,&b,&c);
        ll get = s / c;
        get += (get / a)*b;
        printf("%lld\n",get);
    }

    return 0;
}