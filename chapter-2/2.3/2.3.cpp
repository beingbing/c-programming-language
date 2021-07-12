#include <iostream>
#include <string>
using namespace std;

int strlen(string s[])
{
    int i;
    i = 0;
    while (s[i] != "\0")
        ++i;
    return i;
}

int main()
{
    cout << strlen("Hello, how are you World!!") << endl;
    return 0;
}