#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 7;
#define ll long long
int a[maxn];
int b[maxn];
int vis[maxn];
int main(void)
{
    int n;
    scanf("%d",&n);
    vector<int>ans;
    int flag = 0;
    for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]);
    for(int i = 0 ; i < n ; i++) scanf("%d",&b[i]);
    memset(vis,1,sizeof(vis));
    for(int i = 0 ; i < n ; i++)
    {
        if(vis[b[i]] == 0)
        {
            ans.push_back(0);
            continue;
        }
        int t = 0;
        int g = b[i];
        for(int i = flag ; i < n ; i++)
        {
            if(a[i]!=g)
            {
                vis[a[i]] = 0;
                flag++;
                t++;
            }
            else
            {
                vis[a[i]] = 0;
                break;
            }
        }
        if(i == 0) ans.push_back(t + 1);
        else
            ans.push_back(t);
    }
    for(int i = 0 ; i < n ; i++)
        printf("%d%c",ans[i],i == n-1 ? '\n' : ' ');
    return 0;
}