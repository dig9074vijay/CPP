#include<vector>
using namespace std;

// template<typename T>
// class Stack;

// template<typename T>
// class Node{
//      public:
//     T data;
//     Node<T> *next;
   
//     Node(T d):data(d){}
// };


template<typename T>
class Stack{
    vector<T> s;
    public:
    

    void Push(T data){
        s.push_back(data);
    }

    bool empty(){
        return s.size() == 0;
    }

    void Pop(){
        s.pop_back();
    }

    T Top(){
        return s[s.size()-1];
    }

    
};