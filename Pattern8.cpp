// MANMOHAN LOVES PATTERNS - I
// Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.

// 1
// 11
// 111
// 1001
// 11111
// 100001

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(i % 2 == 0 && i > 2)
            {
                if(j == 1 ||j == i)
                cout << "1\t";
                else 
                cout << "0\t";
            }
            else cout << "1\t";            
        }
        cout << endl;
    }
    return 0;
}