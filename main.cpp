#include <iostream>
using namespace std;

int biggest(int a[], int n)
{

    if (n == 1)
        return a[0];

    int m = biggest(a, n - 1);

    if (a[n - 1] > m)
        return a[n - 1];
    else
        return m;
}

int main()
{

    int arr[10];
    int n;
    for (int i = 0; i <= 9; i++)
    {
        cin >> n;
        arr[i] = n;
    }

    cout << biggest(arr, 10);

    return 0;
}
