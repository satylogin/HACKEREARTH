#include <bits/stdc++.h>
using namespace std;
bool isSafe(int x,int y,int n,int m,vector<string>&A){
    if(x>=0&&x<n&&y>=0&&y<m&&A[x][y]!='*'){
        return true;
    }
    return false;
}
int main(){
    int i,j,n,m,query,x,y;
    cin>>n>>m>>query;
    vector<string>A;
    string s;
    for(i=0;i<n;i++){
        cin>>s;
        A.push_back(s);
    }
    cin>>x>>y;
    x--;
    y--;
    vector<vector<int>>dist(n);
    vector<vector<bool>>visit(n);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            dist[i].push_back(INT_MAX);
            visit[i].push_back(false);
        }
    }
    dist[x][y]=0;
    visit[x][y]=true;
    queue<pair<pair<int,int>,int>>q;
    q.push({{x,y},0});
    while(!q.empty()){
        pair<pair<int,int>,int>p=q.front();
        q.pop();
        int cx[]={1,-1,0,0};
        int cy[]={0,0,1,-1};
        for(i=0;i<4;i++){
            int newx=p.first.first+cx[i];
            int newy=p.first.second+cy[i];
            if(isSafe(newx,newy,n,m,A)&&visit[newx][newy]==false){
                visit[newx][newy]=true;
                dist[newx][newy]=p.second+1;
                q.push({{newx,newy},p.second+1});
            }
        }
    }
    while(query--){
        cin>>x>>y;
        x--;
        y--;
        if(dist[x][y]!=INT_MAX){
            cout<<dist[x][y]<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
