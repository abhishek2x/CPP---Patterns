// PASCAL TRIANGLE 1
// Given an integer N, print Pascal Triangle upto N rows. 

// Input Format:
// Single integer N.

// Constraints:
// N <= 10

// Output Format
// Print pascal triangle.

// Sample Input
// 4
// Sample Output

//            1
//          1   1
//        1   2   1
//      1   3   3   1

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, a, d;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        a = (int)pow(11, i-1);
        if(a % 10 == 0)
        a++;
        while (a > 0)
        {
            d = a % 10;
            cout << d << " ";
            a = a / 10;
        }
        cout << endl;        
    }
    return 0;
}