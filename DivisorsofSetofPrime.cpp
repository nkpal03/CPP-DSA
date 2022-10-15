#include <bits/stdc++.h>
#define loop(i, n) for (int i = 0; i < n; i++)
#define loo(i, n) for (int i = 1; i <= n; i++)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // input size of set of prime numbers
    set<int> s;
    int n;
    cin >> n;
    loop(i, n)
    {
        int p;
        cin >> p;
        s.insert(p);
    }
    cout << n + 1;
    return 0;
}