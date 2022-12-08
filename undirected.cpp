#include<iostream>

using namespace std;
int adj[20][20];
void edge(int u,int v)
{
    adj[u][v]=1;
    adj[v][u]=1;


}

int main()
{
    int x=4;
    edge(0, 3);
edge(1,0);
edge(1,2);
edge(1,3);
edge(2,0);
edge(2,1);
edge(2,3);
edge(2,2);
edge(3,4);
edge(3,2);



    for(int i=0;i<x;i++){
        for(int j =0;j<x;j++)
        {
            cout<<adj[i][j]<<" ";
        }cout<<endl;
    }
}

