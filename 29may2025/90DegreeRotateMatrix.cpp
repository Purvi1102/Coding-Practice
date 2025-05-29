#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int row_size;
    cout << "enter row size: ";
    cin >> row_size;
    int col_size;
    cout << "enter column size: ";
    cin >> col_size;
    vector<vector<int>> arr(row_size, vector<int>(col_size));
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            if (i < j)
                swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < row_size; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }
    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < col_size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}