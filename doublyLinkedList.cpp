#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
};

class DoublyLL
{
    Node *head;
    Node *tail;

public:
    DoublyLL()
    {
        head = nullptr;
        tail = head;
    }
    void insertFront(int x)
    {

        Node *p;
        p = new Node;
        p->data = x;
        if (head == nullptr)
        {
            p->next = p->prev = nullptr;
            head = tail = p;
            cout<<"inserted first node "<<x<<" as value"<<endl;
        }
        else
        {
            p->next = head;
            head->prev = p;
            head = p;
            p->prev = nullptr;
            cout<<"inserted node "<<x<<" as value"<<endl;
        }
    }
    void insertRare(int x)
    {

        Node *p;
        p = new Node;
        p->data = x;
        if (head == nullptr)
        {
            p->next = p->prev = nullptr;
            head = tail = p;
            cout<<"inserted first node "<<x<<" as value"<<endl;
        }
        else
        {
           tail->next = p;
           p->prev = tail;
           
            cout<<"inserted node "<<x<<" as value"<<endl;
        }
    }
  
   void deleteitem(int x){

       Node *temp;
       temp = head;
       Node *temp1;

       while (temp != nullptr)
       {

           if (temp->data==x)
           {
                temp1 = temp->next;
                break;
           }
           
           temp = temp->next;
       }
       

   }
    
     void Disp()
    {
        Node *temp;
        temp = tail;
        while (temp != nullptr)
        {
            cout << temp->data << endl;
            temp = temp->prev;
        }
    }
    
};

int main()
{
    DoublyLL l1;
    l1.insertFront(10);
    l1.insertFront(20);
    l1.insertFront(30);
    // l1.delItem();
    l1.Disp();
   

    return 0;
}