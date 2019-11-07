// PATTERN MOUNTAIN
// Take N (number of rows), print the following pattern (for N = 4).

//                        1           1
//                        1 2       2 1  
//                        1 2 3   3 2 1
//                        1 2 3 4 3 2 1   

#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, l;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "\t";
        }
        for (int k = n+1-a; k > 0; k--)
        {
            cout << "\t";
        }
        for ((l = i<n ? i : i-1) ; l >= 1; l--)
        {
            cout << l << "\t";
        }
        a += 2;
        cout << "\n";
    }
    return 0;
}
