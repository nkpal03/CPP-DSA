#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &primes, int n)
{

    int ans = 0;
    int m = primes.size();
    for (int i = 1; i < (1 << m); i++)
    {

        int lcm = 1;
        for (int j = 0; j < m; j++)
        {

            if (((i >> j) & 1))
            {
                lcm *= primes[j];
            }
        }

        if ((__builtin_popcount(i) % 2) == 0)
        {
            ans -= n / lcm;
        }
        else
        {
            ans += n / lcm;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;                                                      // number upto which factor are to be calculated
    vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31}; // set of prime no whose total divisors are to be calculated
    cout << solve(primes, n) << endl;
}