#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[101], *p;
    int n;
    bool exista = false;
    cin.getline(s, sizeof(s));
    cin >> n;
    for (p = strtok(s, " "); p; p = strtok(NULL, " "))
    {
        if (strlen(p) == n)
        {
            cout << p << endl;
            exista = true;
        }
    }
    if (exista == false)
        cout << "nu exista";
    return 0;
}
