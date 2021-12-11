#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    cin.getline(s, sizeof(s));
    for (int i = 0; i < strlen(s); i++)
        if (strchr("aeiou", s[i]) != 0 && s[i] != ' ' && (s[i] >= 'a' && s[i] <= 'z'))
            s[i] -= 'a' - 'A';
    cout << s;
}
