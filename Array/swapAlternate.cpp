#include <iostream>
using namespace std;

void swapAlt(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
        i+=2;
    }
}

int main()
{
    int arr[] = {3, 5, 7, 6, 9, 2};

    swapAlt(arr, 6);

    // printing array
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}