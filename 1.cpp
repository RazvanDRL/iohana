#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int *a1 = &a;
    int *b1 = &b;
    for (int i = 0; i < 2; i++, swap(a1, b1))
        cout << *a1 << " " << *b1 << endl;
    return 0;
}
