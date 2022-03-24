#include<iostream>
using namespace std;


int LinearSearch(int *arr,int key){

    for (int i = 0; i <sizeof(arr); i++)
    {
       if (key == arr[i])
       {
           return i;
       }
       
    }
    return -1;
}


int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int key,e=-1;
    cout<<"enter the key"<<endl;
    cin>>key;
   
    int ans = LinearSearch(arr,key);
    if (ans>0)
    {
        cout<<ans;
    }
    else{
        cout<<"not found ";
    }
    return 0;
}