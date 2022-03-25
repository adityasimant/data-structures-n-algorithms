#include <iostream>
using namespace std;

class Node
{

public:
    int info;
    Node *next;
};

class Simplyll
{
public:
    Node *start;
    Simplyll()
    {
        start = nullptr;
    }


    void insertRare(int x)
    {
        Node *p;
        p = new Node;
        p->info = x;
        p->next = nullptr;
        if (start == nullptr)
        {
            p->next = nullptr;
            start = p;
        }
        else
        {
            Node *temp;
            temp = start;
            while (temp != nullptr)
            {

                if (temp->next == nullptr)
                {
                    temp->next = p;
                    return;
                }
                temp = temp->next;
            }
        }
    }
    void show()
    {
        Node *temp;
        temp = start;
        while (temp != nullptr)
        {
            cout << temp->info << endl;
            temp = temp->next;
        }
    }
    void deleteItem()
    {
        if (start == nullptr)
        {
            cout << "list is empty ";
            return;
        }

        start = start->next;
        cout << "DELETE ITEM :" << endl;
    }


    void replace(int x, int y)
    {
        Node *tap;
        tap = start;

      
      while (tap != nullptr)
      {

         if(tap->info==x)
         {
             tap->info=y;
             return;
         }
         tap=tap->next;
      }
      
    }
};

int main()
{
    Simplyll s;
    s.insertRare(10);
    s.insertRare(20);
    s.insertRare(30);
    s.insertRare(40);
    s.replace(20,200);
    s.show();



}