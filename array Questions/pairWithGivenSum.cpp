
// Find a pair with the given sum in an array

#include<iostream>
using namespace std;



int main(){

    int arr[] = {8, 7, 2, 5, 3, 1};
    int target = 10;

    int size = sizeof(arr)/4 ;


    // outer loop
    for(int i=0; i<size;i++){

        // inner loop
        for (int j = 0; j < size; j++)
        {
            // checking addition and printing
            if(arr[i]+arr[j] == target){

                cout<<"Pair found ("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
        

    }

    return 0;
}