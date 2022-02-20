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
    vector<int> visited(v+1,0);
    queue<int> q;
    q.push(0);
      visited[0] = 1;
    while((!q.empty())){
        int p = q.front();
        q.pop();
        cout<<p<<endl;
        for(auto x:l[p]){
            
            if(!visited[x]){
                q.push(x);
                visited[x] = 1;
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
    BFS(a,v,0);

}
