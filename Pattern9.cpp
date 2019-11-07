// MANMOHAN LOVES PATTERNS- II
// Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.

// Sample Input
// 5
// Sample Output
// 1
// 11
// 202
// 3003
// 40004

#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(i == 0)
            cout << "1";
            else
            {
                if(j == 0 || j == i)
                {
                    cout << i << "\t";
                }
                else cout << "0\t";
            }
        }
        cout << endl;
    }
    
    return 0;
}