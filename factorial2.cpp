#include<iostream>
using namespace std;

int temp(int n){

    if (n==0)
    {
        return n;
    }
    int p = n%10+ temp(n/10);
    return p;
}

int main(){
int n;
cin>>n;
int x = temp(n);
cout<<x;
    return 0;
}