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
    void insert(int x)
    {
        Node *p;
        p = new Node;
        p->data = x;
        if (start == nullptr)
        {

            start = p;
            p->next = start;
            // cout<<start<<":"<<start->data<<endl;
        }
        else
        {
            Node *temp;
            temp = start;
            while (temp->next != start)
            {
                temp = temp->next;
            }
            p->next = start;
            start = p;
            temp->next = start;
            //  cout<<start<<":"<<start->data<<endl;
        }
    }
    void Disp()
    {

        cout << "----------------------------------------------------------------- " << endl;
        Node *temp;
        temp = start;
        if (temp == nullptr)
        {
            cout << "list is empty ";
        }

        do
        {
            cout << temp->data << endl;
            temp = temp->next;
        } while (temp != start);
    }
    void deleteItem(int x)
    {
        Node *temp1;
        Node *temp2;
        Node *temp;
        temp = start;
        temp2 = start;
        if (start->next == start)
        {

            start = nullptr;
        }

        do
        {

            if (temp->data == x)
            {
                temp1 = temp->next;
                break;
            }
            temp2 = temp;
            temp = temp->next;
        } while (temp != start);
        //    cout<<temp2<<"\t"<<temp1<<endl;
        temp2->next = temp1;
    }
    void replace(int x, int y)
    {
        Node *temp1;
        temp1 = start;

        do
        {
            if (temp1->data == x)
            {
                temp1->data = y;
                return;
            }
            temp1 = temp1->next;
        } while (temp1 != start);
    }
};

int main()
{
    List l1;

    l1.insert(10);
    // l1.deleteItem(10);
    l1.Disp();
    // l1.replace(20,60);
    // l1.Disp();
    //    l1.replace(20,69);
    return 0;
}