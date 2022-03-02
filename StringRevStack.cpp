#include <iostream>
using namespace std;

class Rev
{
private:
    int top;
    int max = 6;
    char stk[6];

public:
    Rev()
    {
        top = -1;
    }
    bool isFull()
    {
        if (top == (max - 1))
        {
            return true;
        }
        return false;
    }
    void push(char x)
    {
        if (isFull())
        {
            cout << "stk is full";
            return;
        }
        top++;
        stk[top] = x;
    }
    void disp()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stk[i];
        }
    }
};

int main()
{
    char word[5];

    cout << "enter the word ";
    
    for (int i = 0; i < 3; i++)
    {
            cin >> word[i];
    }
    
    Rev r1;
    for (int i = 0; i < 3; i++)
    {
        r1.push(word[i]);
    }
    r1.disp();

    return 0;
}