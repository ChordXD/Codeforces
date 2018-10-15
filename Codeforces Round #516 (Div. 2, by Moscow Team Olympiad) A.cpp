#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int maxn = 1e5 + 7;
int a[maxn];
int main(void)
{
    vector<int>p;
    for(int i = 0 ; i < 3 ; i++)
    {
        int t;
        scanf("%d",&t);
        p.push_back(t);
    }
    sort(p.begin(),p.end());
    if(p[0] + p[1] > p[2])
        puts("0\n");
    else
        printf("%d\n",p[2] - (p[0] + p[1]) + 1);

    return 0;
}