#include<iostream>
#include<vector>

using namespace std;



class Heap{
    vector<int> h;

    void heapify(int idx){
        int left = 2*idx;
        int right = 2*idx+1;
        int minIdx = idx;
        if(left<h.size()-1 && h[left]<h[idx]){
            minIdx = left;
            swap(h[left],h[idx]);
        }
        if(right<h.size()-1 && h[right]<h[minIdx]){
            minIdx = right;
            swap(h[minIdx],h[right]);
        }

        if(idx!=minIdx){
            heapify(minIdx);
        }

    }

    public :

    Heap(int size=10){
        h.reserve(10);
        h.push_back(-1);
    }

    void push(int data){
        h.push_back(data);
        int idx = h.size()-1;
        int parent = idx/2;
        while(idx>1 && h[idx]<h[parent]){
            swap(h[idx],h[parent]);
            idx = parent;
            parent= parent/2;
        }
    }

    int top(){
        return h[1];
    }

    void pop(){
        swap(h[1],h[h.size()-1]);
        h.pop_back();

        heapify(1);
    }
};

int main(){
    Heap p;
    
    p.push(5);
    p.push(3);
    p.push(5);
   cout<< p.top()<<endl;
    p.push(9);
    p.push(2);
    p.push(10);
    p.push(11);
    p.push(1);
   cout<< p.top()<<endl;
   p.pop();
   cout<<p.top()<<endl;
    return 0;
}