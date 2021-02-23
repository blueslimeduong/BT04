#include <iostream>

using namespace std;

bool check (string a, string b)
{
    int aSize = a.size(), bSize = b.size();
    if(aSize!=bSize)
    {
        return false;
    }
    int i=0, j=aSize - 1;
    while(i<j)
    {
        if(a[i++]!=b[j--])
        {
            return false;
        }
    }
    return true;
}
void solve(string input[],const int N)
{
    for(int i=0; i<N-1; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(check(input[i],input[j]))
            {
                int Size = input[i].size();
                cout << Size << ' ' << input[i][Size/2];
                return;
            }
        }
    }
}
int main()
{
    int N;
    cin >> N;
    string password[100];
    for(int i=0; i<N; i++)
    {
        cin >> password[i];
    }
    solve(password, N);
    return 0;
}
