#include<iostream>
using namespace std;
int adj[20][20];
void edge(int u,int v)
{
    adj[u][v]=1;
}
int main()
{
    int v = 6;
    edge(0,3);
    edge(0,4);
    edge(5,3);
    edge(5,4);
    edge(1,2);
    edge(1,5);
    edge(1,4);
    edge(2,3);
    edge(2,5);
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
