#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> &a, vector<int> &b){
    return a[2]<b[2];
}
void makeset(vector<int> &parent, vector<int> &rank, int n){
    for(int i=0;i<n;i++){
        parent[i]=i;
        rank[i]=0;
    }
}
int findParent(vector<int> &parent, int n){
    if(parent[n]==n){
        return n;
    }
    return parent[n] = findParent(parent,parent[n]);
}
void setUnion(int u,int v,vector<int> &parent,vector<int> &rank){
    u = findParent(parent,u);
    v = findParent(parent,v);

    if(rank[u]<rank[v]){
        parent[u] = v;
    }else if(rank[u]>rank[v]){
        parent[v] = u;
    }else{
        parent[v] = u;
        rank[u]++;
    }
}

int main(){
    vector<vector<int> > edges;
    int n=4;
    cout<<"Enter Number Of Nodes : ";
    cin>>n;
    vector<int>temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        edges.push_back(temp);
        temp.clear();
    }
    sort(edges.begin(),edges.end(),cmp);

    vector<int> parent(n);
    vector<int> rank(n);
    makeset(parent,rank,n);

    int total = 0;

    for(int i=0; i<edges.size(); i++){
        int u = findParent(parent,edges[i][0]);
        int v = findParent(parent,edges[i][1]);

        if(u != v){
            total += edges[i][2];
            setUnion(u,v,parent,rank);
        }
    }
    cout<<"M.S.T : "<<total;
    return 0;
}
