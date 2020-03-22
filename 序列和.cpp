#include <iostream>

using namespace std;

int main()
{
    long long N, L;
    cin >> N >> L;
    while (L <= 100)
    {
        long long n = N / L + L - 1;
        while (n)
        {
            long long sum = (L * (n - L + 1 + n) / 2);
            if (sum < N)
            {
                L++;
                break;
            }
            else if (N == sum)
            {
                n = n - L + 1;
                for (int i = 0; i < L - 1; i++)
                {
                    cout << n + i << " ";
                }
                cout << n + L - 1;
                return 0;
            }
            else
            {
                n--;
            }
        }
    }
    cout << "No";
    return 0;
}
