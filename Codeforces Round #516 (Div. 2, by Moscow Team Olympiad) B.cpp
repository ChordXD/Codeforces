#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int maxn = 1e5 + 7;
int a[maxn];

int BitCount2(unsigned ll n)
{
    unsigned ll c =0 ;
    for (c =0; n; ++c)
    {
        n &= (n -1) ; // 清除最低位的1
    }
    return c ;
}

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a;
    scanf("%d",&a);
    ll ans = 1;
    ans<<=BitCount2(a);
    printf("%lld\n",ans);
    }

    return 0;
}