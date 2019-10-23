#include <bits/stdc++.h>
using namespace std;
int parent[2000];
long long int mod=1000000007;
void intialize(){
    int i;
    for(i=0;i<2000;i++){
        parent[i]=i;
    }
}
int root(int x){
    while(x!=parent[x]){
        parent[x]=parent[parent[x]];
        x=parent[x];
    }
    return x;
}
void dsu(int x,int y){
    int p=root(x);
    int q=root(y);
    parent[p]=parent[q];
}
long long int krushkal(int n,int m,pair<long long int,pair<int,int>>p[]){
    int i,x,y;
    long long int ans=1,c;
    for(i=0;i<m;i++){
        c=p[i].first;
        x=p[i].second.first;
        y=p[i].second.second;
        if(root(x)!=root(y)){
            dsu(x,y);
            ans=(ans%mod*c%mod)%mod;
        }
    }
    return ans;
}
int main(){
    int i,t,n,m,a,b,c;
    cin>>t;
    while(t--){
        cin>>n>>m;
        intialize();
        pair<long long int,pair<int,int>>p[m];
        for(i=0;i<m;i++){
            cin>>a>>b>>c;
            p[i]=make_pair(c,make_pair(a,b));
        }
        sort(p,p+m);
        long long int ans=krushkal(n,m,p);
        cout<<ans<<endl;
    }
    return 0;
}
