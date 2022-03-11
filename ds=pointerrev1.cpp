#include<iostream>
using namespace std;

class Tst{
    public:
    int a,b;
};
int main(){

    Tst *p; 

    p = new Tst;
    int x,y;
    cout<<"Enter the value for a : ";
    cin>>x;
    cout<<"Enter the value for b : ";
    cin>>y;
    p->a=x;
    p->b=y;
    cout<<p->a+p->b;
    return 0;
}