#include<iostream>
using namespace std;

class Queue{

    private:
    int front;
    int rear;
    int max=4;
    int list[4];

    public:
    Queue(){
        rear=-1;
        front=0;
    }
    bool isFull(){
        if (rear == max -1)
        {
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if (rear<front)
        {
            return true;
        }
        return false;
    }
    void enqueue(int x){
        if (isFull())
        {
            cout<<"queue is full"<<endl;
            return;
        }
        list[++rear] = x;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"queue is empty";
            return;
        }
        front++;
    }
    int peek(){

        return list[front];
    }
    void display(){
        for (int i = front; i <= rear; i++)
        {
            cout<<list[i];
        }
        
    }
};



int main(){

    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.dequeue();
    q1.display();

    return 0;
}