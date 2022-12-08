#include<bits/stdc++.h>
using namespace std;
int main (){
    int V=5;
    int Graph[V][V] = {{0,35,40,0,0},{35,0,25,10,0},{40,25,0,20,15},{0,10,20,0,30},{0,0,15,30,0}};
    int edge;
    int visit[V];
    for(int i=0; i<V; i++){
        visit[i]=false;
    }
    edge = 0;
    visit[0] = true;
    int x,total=0;
    int y;
    while (edge<V-1){
        int Min=INT_MAX;
        x=0;
        y=0;
        for(int i=0;i<V;i++){
            if(visit[i]){
                for(int j=0;j<V;j++){
                    if(!visit[j]&&Graph[i][j]){
                        if (Min>Graph[i][j]){
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
