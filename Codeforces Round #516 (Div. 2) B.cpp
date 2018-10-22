#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 7;

int a[maxn];
int b[maxn];
int ans[maxn];

int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i < n - 1 ;i++)scanf("%d",&a[i]);
    for(int i = 0 ; i < n - 1 ; i++) scanf("%d",&b[i]);
    
    for(int i = 0 ; i < 4 ; i++)
    {
        int flag = 1;
        
        ans[0] = i;
        for(int j = 1 ; j < n ; j++)
        {
            int good = 1;
            for(int k = 0 ; k < 4 ; k++)
            {
                ans[j] = k;
                if((ans[j]|ans[j - 1]) != a[j - 1])
                {
                    good = 0;
                    continue;
                }
                if((ans[j]&ans[j - 1])!=b[j - 1])
                {
                    good = 0;
                    continue;
                }
                good = 1;
                break;
            }
            //printf("%d\n",good);
            if(good==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            printf("YES\n");
            for(int i = 0 ; i < n ; i++)
            {
                printf("%d%c",ans[i],i != n-1 ? ' ' : '\n');
            }
            //system("pause");
            return 0;
        }
    }
    printf("NO\n");
   // system("pause");
    return 0;
}