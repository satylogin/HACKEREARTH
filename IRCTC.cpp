#include <bits/stdc++.h>
using namespace std;

void dijkstra(vector<vector<pair<int,int>>>&graph,vector<int>&dist,vector<int>&parent,int src,int n){
    int i,w,x,y;
    dist[src]=0;
    parent[src]=src;
    vector<bool>visit(n+1);
    for(i=1;i<=n;i++){
        visit[i]=false;
    }
    multiset<pair<int,int>>s;
    s.insert({0,src});
    while(!s.empty()){
        pair<int,int>p=*(s.begin());
        s.erase(s.begin());
        x=p.second;
        if(visit[x]){
            continue;
        }
        visit[x]=true;
        for(i=0;i<graph[x].size();i++){
            y=graph[x][i].first;
            w=graph[x][i].second;
            if(dist[y]>dist[x]+w){
                dist[y]=dist[x]+w;
                parent[y]=x;
                s.insert({dist[y],y});
            }
        }
    }
}
int main(){
    int i,t,w,n,m,x,y,q,k,z;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<vector<pair<int,int>>>graph(n+1);
        vector<int>dist(n+1);
        vector<int>parent(n+1);
        for(i=0;i<k;i++){
            cin>>x>>y>>w;
            graph[x].push_back({y,w});
            graph[y].push_back({x,w});
        }
        cin>>x>>z>>y;
        for(i=1;i<=n;i++){
            dist[i]=INT_MAX;
            parent[i]=i;
        }
        dijkstra(graph,dist,parent,z,n);
        if(dist[x]==INT_MAX||dist[y]==INT_MAX){
            cout<<"No Train Found."<<endl;
        }
        else{
            cout<<dist[x]+dist[y]<<endl;
            vector<int>ans;
            int r;
            r=x;
            while(r!=z){
                ans.push_back(r);
                r=parent[r];
            }
            r=y;
            int c=ans.size();
            ans.push_back(r);
            while(r!=z){
                r=parent[r];
                ans.push_back(r);
            }
            reverse(ans.begin()+c,ans.end());
            int l=ans.size();
            for(i=0;i<l;i++){
                cout<<ans[i]<<" ";
            }
            cout<<"\n";
        }
        
    }
    return 0;
}
