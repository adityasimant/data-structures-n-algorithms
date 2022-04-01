// graph is a data struct which is collection of vertices and edges.
// actually graph is used to represent the relation between data points 
// for eg. in social networking website,user connections are represented by graph data struct 


#include<iostream>
using namespace std;


class Node {
    public:
    int data;
    Node *next;
};

class Graph{

    private :
    Node **arr;

    public:
    Graph(int n){

        arr = (Node **)new Node[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = nullptr;
        }
    }

    void addEdge(int i,int x){
        Node *p;
        p = new Node;
        p->next = nullptr;
        p->data = x;
        if (arr[i] == nullptr)
        {
            arr[i] = p;
        }
        else{
            Node *temp;
            temp = arr[i];
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = p;
        }
        
    }

    void show(int j){

        Node *temp;
        temp = arr[j];
        while (temp != nullptr)
        {
            cout<<temp->data<<" ";
            temp = temp ->next;
        }
        cout<<endl;


    };

};

int main (){

    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);

    g.show(0);

    return 0;
}