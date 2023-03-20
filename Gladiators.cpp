#include <iostream>
#include <algorithm>
using namespace std;
int v[1000001];
int main()
{
    long long n, a = 0;
    cin >> n;
    for (int i = 1;i <= n;i++)
        cin >> v[i]; //read elements in the array
    sort(v + 1, v + n + 1);
    int m = v[1]; //remember the first element which has the smallest value
    for (int i = 2;i <= n;i++)
        a += v[i] - m; //add each diff to the variable to calculate the highest coefficient
    cout << a;

    return 0;
}