#include <iostream>

#include <string>
using namespace std;

int main()
{
    string n;
    cout << "enter the string:";
    cin >> n;
    string m;
    cout << "enter the string 2:";
    cin >> m;
    string ans;
    for (int i = n.length() - 1; i >= 0; i--)
    {
        ans.push_back(n[i]);
    }
    if (ans == m)
        cout << ans <<  " is pallindrome";
    else
        cout << ans<< "is not palindrome";
    return 0;
}