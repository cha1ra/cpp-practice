#include <iostream>

using namespace std;

inline int max(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "最大値は" << max(a, b) << "です" << endl;
}