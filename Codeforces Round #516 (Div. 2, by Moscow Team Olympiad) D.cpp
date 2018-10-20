#include <bits/stdc++.h>
using namespace std;
const int maxn = 2050;
int vis[maxn][maxn];
char Map[maxn][maxn];

int f[4][2] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

int maxnl, maxnr;
int n, m;
int ans;
int startx, starty;

typedef struct
{
    int x, y, l, r;
} poi;

bool judge(poi a)
{
    if (a.x >= 0 && a.y >= 0 && a.x < n && a.y < m && a.l <= maxnl && a.r <= maxnr && vis[a.x][a.y] == 0&& Map[a.x][a.y] == '.')
        return true;
    return false;
}

void bfs(void)
{
    memset(vis, 0, sizeof vis);
    poi first;
    first.x = startx;
    first.y = starty;
    first.l = first.r = 0;
    ans = 0;
    deque<poi> p;
    p.push_front(first);
    vis[first.x][first.y] = 1;
    while(!p.empty()){
        poi then = p.front();
        p.pop_front();
        //printf("%d %d\n",then.x,then.y);
        ans++;
        for( int i = 0 ; i < 4 ; i++ )
        {
            poi Next;
            Next.x = then.x + f[i][0];
            Next.y = then.y + f[i][1];
            Next.l = then.l;
            Next.r = then.r;
            if(i == 0) Next.l = then.l + 1;
            else if(i == 1) Next.r = then.r + 1;
            if(judge(Next))
            {
                vis[Next.x][Next.y] = 1;
                if(i == 0|| i == 1)
                    p.push_back(Next);
                else
                    p.push_front(Next);
            }
        }
    }
}

int main(void)
{
    scanf("%d%d%d%d%d%d",&n,&m,&startx,&starty,&maxnl,&maxnr);
    startx--;
    starty--;
    for(int i = 0 ; i < n ; i ++)
        scanf("%s",Map[i]);
    bfs();
  //  for(int i = 0 ; i < n ; i ++ )
  //  {
  //      for(int j = 0 ; j < m ; j ++)
  //          printf("%d ",vis[i][j]);
  //      printf("\n");
  // }
    printf("%d\n",ans);
  //  system("pause");
    return 0;
}