


template<typename T>
class Stack;

template<typename T>
class Node{
     public:
    T data;
    Node<T> *next;
   
    Node(T d):data(d){}
};


template<typename T>
class Stack{
    Node<T>* head;
    public:
    Stack(){
        head = NULL;
    }

    void Push(T data){
        Node<T> * n = new Node<T>(data);
        n->next = head;
        head = n;
    }

    bool empty(){
        return head == NULL;
    }

    void Pop(){
        Node<T> *ptr = head;
        head = head->next;
        delete ptr;
    }

    T Top(){
        return head->data;
    }

    
};