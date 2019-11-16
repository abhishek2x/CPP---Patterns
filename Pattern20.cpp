// PATTERN NUMBERS & STARS - 1
// Take as input N, a number. Print the pattern as given in output section for corresponding input.

// Input Format:
// Enter value of N

// Constraints:
// Output Format
// All numbers and stars are Space separated

// Sample Input
// 5
// Sample Output
// 1 2 3 4 5
// 1 2 3 4 * 
// 1 2 3 * * *
// 1 2 * * * * *
// 1 * * * * * * *

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1-i; j++)
        {
            cout << j;
        }
        for (int k = 2; k <= i; k++)
        {
            cout << "*";
        }
        for (int m = 3; m <= i; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}