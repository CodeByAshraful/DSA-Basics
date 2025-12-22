#include<bits/stdc++.h>
using namespace std;
char grid[105][105]; //declare globally for easily access any function.
bool vis[105][105];
vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}};
void dfs(int si,int sj)
{
    cout<<si<<" "<<sj<<endl;
    vis[si][sj]=true;
    for(int i=0; i<4; i++) //for four directions(up,down,left,right)
    {
        int ci,cj; //for children.
        ci=si+d[i].first;
        cj=sj+d[i].second;

        cout<<ci<<" "<<cj<<endl;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>grid[i][j];
        }
    }
    int si,sj;
    cin>>si>>sj;

    dfs(si,sj);
      
    return 0;
}
/*
sample input :
3 4
. . . .
. . . .
. . . .
1 2
sample output :
1 2
0 2
2 2
1 1
1 3
*/