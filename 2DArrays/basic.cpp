#include <iostream>
using namespace std;

int main()
{
    int student[3][3] = {{100, 100, 100},
                         {85, 74, 89},
                         {63, 72, 65}};
    int n = 3, m = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << student[i][j] << " ";
        }
        cout << endl;
    }
}