// convert num char to int
#include <iostream>
using namespace std;

int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

int main()
{
    cout << atoi("123678") << endl;
    return 0;
}