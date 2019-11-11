// HOLLOW RHOMBUS PATTERN
// Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

// Input Format:
// Single integer N.

// Constraints:
// N <= 20

// Output Format
// Print pattern.

// Sample Input
// 5
// Sample Output
//     *****
//    *   *
//   *   *
//  *   *
// *****
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 2*n; i++)
    {
        for (int j = 1; i <= n, j <= n; j++)
        {
            if((i + j == n+1  && i != 1)|| i == n)
            cout << "*";
            else cout << " ";
        }
        for (int j = n+1; i > n, j <= 2*n; j++)
        {
            if((i == 1 && j > n) || (i + j == 2*n))
            cout<< "*";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}

//      *****
//   *    *
//  *    *
// *    *
// *****

//     *****
//    *   *
//   *   *
//  *   *
// *****