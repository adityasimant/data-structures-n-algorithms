#include<iostream>
using namespace std;

class Tst{
    public:
    int x,y;
    Tst(){
        x=10;
        y=20;
    }

};

int main(){
 
 
    Tst t1;
    Tst *p;

    p=&t1;
   
    cout<<p->x+p->y;
    return 0;
}