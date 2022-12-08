#include<bits/stdc++.h>
using namespace std;
void fillZero(vector< vector<int> > &adj,int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp.push_back(0);
        }
        adj.push_back(temp);
    }
}
void makeGraph(vector< vector<int> > &temp,int x,int y){
    temp[x][y]=1;
}
void display(vector< vector<int> > &adj,int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
void findPath(vector< vector<int> > &path,vector< vector<int> > &adj,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(adj[i][j]==1){
                path[i][j]=1;
            }
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(path[i][j]==0){
                    path[i][j]=path[i][j]+(path[i][k]*path[k][j]);
                }
            }
        }
    }
}
int main(){
    vector<vector<int> > adj;
    vector<vector<int> > path;
    int N;
    cout<<"Enter Number Of Node: ";
    cin>>N;
    fillZero(adj,N);
    fillZero(path,N);
    makeGraph(adj,0, 4);
    makeGraph(adj,0, 3);
    makeGraph(adj,1, 2);
    makeGraph(adj,1, 4);
    makeGraph(adj,1, 5);
    makeGraph(adj,2, 3);
    makeGraph(adj,2, 5);
    makeGraph(adj,5, 3);
    makeGraph(adj,5, 4);
    display(adj,N);
    cout<<endl;
    findPath(path,adj,N);
    display(path,N);
    return 0;
}
