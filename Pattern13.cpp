// PATTERN TRIANGLE
// Take N (number of rows), print the following pattern (for N = 4).
// For n = 5
//                                 1
//                         0       1       0
//                 -1      0       1       0       -1
//         -2      -1      0       1       0       -1      -2
// -3      -2      -1      0       1       0       -1      -2      -3

// Input Format:
// Constraints:
// 0 < N < 10

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int a = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n-i; k++)
        {
            cout << "\t";
        }
        for (int j = 1; j <= (2*i)-1; j++)
        {
            if( j < ((2*i))/2)
            {
                cout << a << "\t";
                a++;
            }
            else
            {
                cout << a << "\t";
                a--;
            }
        }
        cout << endl;        
    }
    return 0;
}