#include <iostream>
#include <climits>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void count(int arr[], int n)
{
    int minval = INT_MAX, maxval = INT_MIN;
    
    // Find min and max
    for (int i = 0; i < n; i++)
    {
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }

    int range = maxval - minval + 1;
    int frequency[range] = {0};

    // Count frequencies
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i] - minval]++;
    }

    // Reconstruct sorted array
    int j = 0;
    for (int i = 0; i < range; i++)
    {
        while (frequency[i] > 0)
        {
            arr[j++] = i + minval;
            frequency[i]--;
        }
    }

    print(arr, n);
}

int main()
{
    int arr[] = {5, 4, 1, 1,5,6,6, 3, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(int);
    count(arr, n);
}
