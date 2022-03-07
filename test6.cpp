#include <iostream>
#include <string.h>
using namespace std;

class stk
{
private:
    int top;
    char list[60];
    int max = 60;

public:
    stk()
    {
        top = -1;
    }
    bool isFull()
    {
        bool f = false;
        if (top == max - 1)
        {
            f = true;
        }
        return f;
    }
    bool isEmpty()
    {
        bool f = false;
        if (top < 0)
        {
            f = true;
        }
        return f;
    }
    void push(char a)
    {
        if (isFull())
        {
            cout << "the stack is full" << endl;
            return;
        }

        list[++top] = a;
    }
    char pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        char ch = list[top--];
        return ch;
    }
    char peek()
    {
       
        return list[top];
        
    }
};

int getPrecd(char r)
{
    if (r == '+' || r =='-')
    {
        return 1;
    }
    if (r == '*' || r =='/')
    {
        return 2;
    }
    
}

int main()
{
    stk s1;
    char input[60], output[60];
    int j = 0;
    cout << "enter the infix : " << endl;
    cin >> input;
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] >= 97 && input[i] <= 122)
        {
            // output[j] = input[i];
            // j++;
            cout<<input[i];
        }
        else
        {

            while (!s1.isEmpty() && getPrecd(s1.peek()) >= getPrecd(input[i]))
                {
                    // char end;
                    // end = s1.pop();
                    // output[j] = end;
                    // j++;
                    cout<<s1.pop();
                }
            
            s1.push(input[i]);
        }
    }
    while (!s1.isEmpty())
    {
        // char last = s1.pop();
        // output[j] = last;
        // j++;
        cout<<s1.pop();
    }
    
    // for (int i = 0; i < strlen(output) ; i++)
    // {
    //     cout << output[i];
    // }

    return 0;
}