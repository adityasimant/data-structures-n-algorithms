#include <iostream>
using namespace std;

class CQueue
{
private:
    int rear, front;
    int list[5];

public:
    CQueue()
    {
        rear = -1;
        front = -1;
    }

    void enqueue(int x)
    {

        if (front == 0 && rear == 4 || rear == front - 1)
        {
            cout << "queue is full " << endl;
            return;
        }
        else if (front == -1 && rear ==-1)
        {
            front = rear = 0;
        }
        else if (rear == 4 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        list[rear] = x;
        cout << list[rear] << endl;
    }

    void dequeue()
    {
        if (front == -1)
        {
            cout << "queue is empty " << endl;
            return;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == 4)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
    void display()
    {

        if (rear > front && rear == 4 && front == 0)
        {
            for (int i = front; i <= rear; i++)
            {
                cout << list[i]<<endl;
            }
        }
        else if (rear < front)
        {
            for (int i = front; i <= 4; i++)
            {
                cout << list[i]<<endl;
            }
            for (int j = 0; j <= rear; j++)
            {
                cout << list[j]<<endl;
            }
        }
    }
};

int main()
{

    CQueue c1;
    c1.enqueue(1);
    c1.enqueue(2);
    c1.enqueue(3);
    c1.enqueue(4);
    c1.enqueue(5);
    c1.enqueue(6);
    c1.display();
    c1.dequeue();
    c1.enqueue(90);
    c1.display();
    return 0;
}