// PATTERN TRIANGLE
// Take N (number of rows), print the following pattern (for N = 4).

//                        1 
//                      2 3 2
//                    3 4 5 4 3
//                  4 5 6 7 6 5 4
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
            if(a == 1)
            {
                cout << a;
                a++;
                break;
            }
            if( a < ((2 * i) - 1) )
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