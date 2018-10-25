#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 7;
int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    vector<int>ans1,ans2,f;
    int sum = 0;
    int ii = 1;
    while(1)
    {
        sum += ii;
        if(sum > a + b)
            break;
        f.push_back(ii);
        ii++;
        
    }
    // printf("%d\n",sum);
    for(int i = f.size() - 1 ; i >= 0 ; i--)
    {
        if(f[i] <= a)
        {
            a-=f[i];
            ans1.push_back(f[i]);
            continue;
        }
        if(f[i] <= b)
        {
            b -= f[i];
            ans2.push_back(f[i]);
        }
    }
    printf("%d\n",ans1.size());
    for(int i = 0 ; i < ans1.size() ; i++)
        printf("%d%c",ans1[i],i == ans1.size() - 1 ? '\n' : ' ');
    printf("%d\n",ans2.size());
    for(int i = 0 ; i < ans2.size() ; i++)
        printf("%d%c",ans2[i],i == ans2.size() - 1 ? '\n' : ' ');
 //   system("pause");
    return 0;
}