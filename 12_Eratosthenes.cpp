#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sieve[N+1];
    for(int i=1; i<=N; i++)
    {
        sieve[i] = 1;
    }
    for(int i=2; i<=N; i++)
    {
        if(sieve[i]==1)
        {
            cout << i << ' ';
            for(int j=i+i; j<=N; j+=i)
            {
                sieve[j] = 0;
            }
        }
    }
    return 0;
}
