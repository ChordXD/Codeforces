#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 7;
unsigned long long a[maxn];
int vis[maxn];
int main(void)
{
    int n;
    unsigned long long int T;
    scanf("%d%llu",&n,&T);
    unsigned long long int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%llu",a + i);
    }
    long long int ans = 0;
    while(1)
    {
        int s = 0;
        unsigned long long int tsum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(T >= a[i])
            {
                s++;
                tsum += a[i];
                T-=a[i];
            }
        }
       // printf("%d\n",T);
        if(!s) break;
        ans+=s;
        ans+=(T/tsum)*s;
        T-=(T/tsum) * tsum;
    }
    printf("%lld\n",ans);
  //  system("pause");
    return 0;
}