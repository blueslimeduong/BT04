#include <iostream>

using namespace std;
bool sosanh (int a[], int vtri, int Size)
{
    int sumR=0, sumL=0;
    for(int i=0; i<vtri; i++)
    {
        sumL += a[i];
    }
    for(int i=vtri+1; i<Size; i++)
    {
        sumR += a[i];
    }
    if(sumL==sumR)
    {
        return true;
    }
    return false;
}
void solve()
{
    int Size;
    cin >> Size;
    int arr[100];
    for(int i=0; i<Size; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<Size; i++)
    {
        if(sosanh(arr,i,Size))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
}
int main()
{
    int T;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        solve();
    }
    return 0;
}
