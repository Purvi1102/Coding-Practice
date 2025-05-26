#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size_of_array;
    cout<< "enter size of array: ";
    cin>> size_of_array;
    vector<int> arr(size_of_array);
    for(int i=0;i<size_of_array;i++)
    {
        cin>> arr[i];
    }
    int ceven=0;
    int codd=0;

    for(int i: arr)
    {
        if(i%2==0) ceven++;
        else codd++;
    }
    cout<< "Number of even elements = "<< ceven << endl;
    cout<< "Number of odd elements = " << codd;

}