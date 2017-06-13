#include <bits/stdc++.h>
#define FV 1.25506
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    cout << fixed << setprecision(1);
    cout << (n / log(n)) << " " << ((FV * n) / (log(n))) << endl;

    return 0;
}
