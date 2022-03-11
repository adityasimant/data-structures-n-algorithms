#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
};

class List
{
public:
    Node *start;
    List()
    {
        start = nullptr;
    }
    void insert(int x){
        Node *p ;
        p = new Node;
        p->data=x;
        if (start == nullptr)
        {
            p->next = nullptr;
            start = p;
        }
        else{
            p->next = start;
            start =p;
        }
        
    }
    void Disp(){
        Node *temp;
        temp = start;
        while (temp != nullptr)
        {
            cout<<temp->data;
            temp = temp->next;
        }
    }
    void deleteItem(){
        if (start == nullptr)
        {
            cout<<"list is empty ";
            return;
        }
        
        start = start->next;
    }

};

int main()
{
    List l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.Disp();
    l1.deleteItem();
    l1.Disp();
    return 0;
}