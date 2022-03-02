#include<iostream>
using namespace std;

class Stack{

    private:
        int top;
        int max=4;
        int stak[4];
    public:
    Stack(){
        top = -1;
    }
    void push(int x){
        if (top == (max-1))
        {
            cout<<"stack is full"<<endl;
            return;
        }
        top++;
        stak[top]=x;    
    }
    void pop(){
        if (top < 0)
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        cout<<"removed item is "<<stak[top]<<endl;
        top--;  
    }
    void disp(){
        for (int i = top; i >= 0; i--)
        {
            cout<<stak[i]<<endl; 
        }
    }
};

int main(){
    Stack s1; 
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(4);
    // s1.pop();
    // s1.pop();
    s1.disp();
    return 0;
}