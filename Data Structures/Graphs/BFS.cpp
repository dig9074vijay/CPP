#include<iostream>
#include<vector>
#include<set>
#include<queue>
using namespace std;



void addEdge(vector<set<int>> &q,int i ,int j){
    q[i].insert(j);
    q[j].insert(i);
    
}

void printGraph(vector<set<int>> &q, int v){
    for(int i =0;i<v;i++){
        cout<<i<<"-->";
        for(auto x:q[i])
            cout<<x<<" ";
        cout<<endl;    
    }        

}

void BFS(vector<set<int>> &l,int source, int v){
    
      queue<int> q;
      vector<bool> isVisited(v+1,false);
      q.push(source);
      isVisited[source] = true;
      while(!q.empty()){
          int f = q.front();
          cout<<f<<" ";
          q.pop();
          for(auto x: l[f]){
              if(!isVisited[x]){
              q.push(x);
              isVisited[x] = true;
              }
          } 
      }
}

int main(){
    int v;
    cin>>v;
    vector<set<int>> a(v);
  

    addEdge(a,0,2);
    addEdge(a,1,2);

    addEdge(a,1,3);
    addEdge(a,2,1);
    addEdge(a,2,0);
    addEdge(a,3,1);
    addEdge(a,3,4);
    addEdge(a,4,1);
    addEdge(a,4,3);

    printGraph(a,v);
    BFS(a,0,v);

}
