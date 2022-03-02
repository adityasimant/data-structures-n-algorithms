#include <iostream>
using namespace std;

class DTB
{
private:
    int top;
    int max=5;
    int arr[5];
   
public:
    DTB(){
        top=-1;
    }
    bool isFull()
    {
        if (top == (max - 1))
        {
            return true;
        }
        return false;
    }
    void push(int x){
        if (isFull())
        {
            cout<<"stack is full";
            return;
        }
        top++;
        arr[top] = x;
    }
    void disp(){
        for (int i = top; i >= 0; i--)
        {
            cout<<arr[i];
        }
        
    }
  
};

int main()
{
    DTB ob1;
    cout<<"enter the value"<<endl;
    int val,i=0,arr[6];
    cin>>val;
int x;
   while (val>=1)
   {    
       if (val==1)
       {
           ob1.push(x);
           break;
       }
       x=val%2;
       ob1.push(x);
       val=val/2;
   }
   ob1.disp();
    

    return 0;
}