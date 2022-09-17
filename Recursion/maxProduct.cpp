#include<iostream>
#include<vector>

using namespace std;

int main(){
    int temp;
    int arr[] = {1,1,2,3,3,4,5,5};
    int size = sizeof(arr)/4;
    int counter=0;

    for(int i=0; i< size-1;i++){

        if(arr[i] == arr[i+1]){
            
            for(int j=i+1;j<size;j++){
                arr[j]=arr[j+1];
            }
            size--;

        }
    }    
    for(int i=0; i< size;i++){

        cout<<arr[i]<<" ";
    }    

    return 0;

}