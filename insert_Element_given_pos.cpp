#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pos, newElement;
    cin >> pos;
    cin >> newElement;
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = newElement;
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    pos=3;
    //Delete element
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}