// convert to lower case
#include <iostream>
using namespace std;

char *lower(char s[])
{
    int i;
    for (i = 0; s[i] >= 'A' && s[i] <= 'Z'; ++i)
        s[i] = s[i] + 'a' - 'A';
    return s;
}

int main()
{
    char arr[] = {"TJRFB"};
    cout << lower(arr) << endl;
    return 0;
}