#include<iostream>
using namespace std;

int fact(int n){
    if (n == 1)
    {
        return 1;
    }
    int p = n*fact(n-1);
    return p;
}


int main(){
    int n;
    cin>>n;
    int z = fact(n);
    cout<<z;
    return 0;
}