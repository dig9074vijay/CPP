#include<iostream>
#include<vector>
#include<set>
#include<queue>
using namespace std;



void addEdge(vector<vector<int>> &q,int i ,int j){
    q[i].push_back(j);
  
    
}

void printGraph(vector<vector<int>> &q, int v){
    for(int i =0;i<v;i++){
        cout<<i<<"-->";
        for(auto x:q[i])
            cout<<x<<" ";
        cout<<endl;    
    }        

}



void topological_sort(vector<vector<int>> l,int v){
    vector<int> indegree(v,0);
    for(int i =0;i<v;i++){
        for(auto x:l[i]){
            indegree[x]++;
        }
    }

    queue<int> q;
  
    for(int i =0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
            
        }
    }

    while(!q.empty()){
        int f = q.front();
        cout<<f<<" ";
        q.pop();
        for(auto x:l[f]){
            indegree[x]--;
            if(indegree[x]==0){
                q.push(x);
            }
        }
    }
}

int main(){
    int v;
    cin>>v;
    vector<vector<int>> a(v);
  

    addEdge(a,0,2);
    addEdge(a,2,3);

    addEdge(a,3,5);
    addEdge(a,4,5);
    addEdge(a,1,4);
    addEdge(a,1,2);
   

    printGraph(a,v);
    
    topological_sort(a,v);

}
