#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int sumA=0, sumB=0;
    for(int i=1; i<=n; i++)
    {
        int val;
        cin >> val;
        sumA += val;
    }
    for(int i=1; i<=n+1; i++)
    {
        int val;
        cin >> val;
        sumB+=val;
    }
    cout << sumB-sumA;
    return 0;
}
