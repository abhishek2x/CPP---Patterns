// HOLLOW DIAMOND PATTERN(PATTERN 6)
// Take N (number of rows), print the following pattern (for N = 5).

//      * * * * *
//      * *   * *
//      *       *
//      * *   * *
//      * * * * *
// Input Format:
// Constraints:
// 0 < N < 10 (where N is an odd number)
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if( i == 1 || j == 1 || j == n || i == n )
            cout << "*";
            else 
            if( ( ( i == 2 || i == n-1 ) && ( j == 2 || j == n-1 ) ) )
            cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}