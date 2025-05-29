#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int row_size;
     cout<< "enter row size: ";
     cin>> row_size;
     int col_size;
     cout<< "enter column size: ";
     cin>> col_size;
     vector<vector<int>> arr(row_size,vector<int> (col_size));
    //  vector<int> ans;
     for(int i=0;i<row_size;i++)
     {
        int sum=0;
        for(int j=0;j<col_size;j++)
        {
            cin>> arr[i][j];
            sum+=arr[i][j];
        }
        cout<< "sum of " << i+1 <<" row :"<< sum << endl;
     }

}