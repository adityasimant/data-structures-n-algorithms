// given a number, find product of all its digit using recursion;

#include <iostream>

using namespace std;

int recur(int a)
{
    if (a < 10)
    {
        return a;
    }

    return recur(a % 10) * recur(a / 10);
}

int main()
{

    float ans;
    ans = recur(554321);
    cout << ans;
    return 0;
}