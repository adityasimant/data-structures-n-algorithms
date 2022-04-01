#include<iostream>
using namespace std;


class Graph{

private:
    int arr[4][4];

public:

    Graph(){
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                arr[i][j] = 0;
            }
        }
    }

    void add(int x,int y){
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    void show(){
         for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
               cout<<arr[i][j]<<" "; 
            }
            cout<<endl;
        }
    }

};

int main(){

    Graph g;
    g.add(0,1);
    g.add(0,2);
    g.add(0,3);
    g.add(1,2);
    g.show();




    return 0;
}