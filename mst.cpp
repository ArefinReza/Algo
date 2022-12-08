#include<iostream>
using namespace std;
int main()
{
    int v=5;
    int Graph [v][v]={{0,35,40,0,0},{35,0,25,0,20,15},{40,25,0,20,15},{0,10,20,0,30},{0,0,15,30,0}};
    int edge;
    int visit[v];
    for(int i=0;i<v;i++)
    {
        visit[i]=false;
    }
    edge=0;
    visit[0]=true;
    int x,total=0;
    int y;
    while (edge<v-1){
        int Min=INT_MAX;
        x=0;
        y=0;
        for(int i=0;i<v;i++){
            if(visit[i]){
                for(int j=0;j<v;j++){
                    if(!visit[j]&& Graph[i][j]){
                        if(Min>Graph[i][j]){
                            Min=Graph[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
    char AC[]={'A','B','C','D','E'};
    cout<<AC[x]<<" --> "<<AC[y]<<" : "<<Graph[x][y]<<endl;
    total+=Graph[x][y];
    visit[y]=true;
    edge++;

    }
    cout<<"MST : "<<total<<endl;
    return 0;
}
