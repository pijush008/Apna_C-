#include <iostream>
#include<algorithm>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {5, 4, 1, 1,5,6,6, 3, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(int);
     // sort(arr,arr+n); // for sorting 1 to n
    
    // sort(arr+2,arr+5); // for sorting 2 to 5

    sort(arr,arr+n,greater<int>()); // sorting in descending order

    print(arr, n);
}