#include<bits/stdc++.h>
using namespace std;


// Enter number of vertices7
// 0 --> 1 2 
// 1 --> 0 3 
// 2 --> 0 4 
// 3 --> 1 4 5 
// 4 --> 2 3 5 
// 5 --> 3 4 6 
// 6 --> 5 


void addEdge(vector<set<int>> &l,int i,int j){
    l[i].insert(j);
    l[j].insert(i);
}

void printGraph(vector<set<int>> q,int v){
    for(int i = 0;i<v;i++){
        cout<<i<<" --> ";
            for(auto x:q[i]){
                cout<<x<<" ";
            }
        cout<<endl;    
    }
}


void DFShelper(int source,vector<bool> &isVisited,vector<set<int>> l){
    isVisited[source] = true;
    cout<<source<<" ";
    for(auto x: l[source]){
        if(!isVisited[x])
        DFShelper(x,isVisited,l);
    }
    return;
}

void DFS(int source,  vector<set<int>> l, int v){
    vector<bool> isVisited(v+1,false);
    DFShelper(source,isVisited,l);
}

int main(){
    int v;
    cout<<"Enter number of vertices";
    cin>>v;
    vector<set<int>> l(v);

    addEdge(l,0,1);
    addEdge(l,0,2);
    addEdge(l,1,3);
    addEdge(l,2,4);
    addEdge(l,3,4);
    addEdge(l,3,5);
    addEdge(l,4,5);
    addEdge(l,5,6);

    printGraph(l,v);
    DFS(0,l,v);
}