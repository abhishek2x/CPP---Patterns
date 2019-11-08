// PATTERN DOUBLESIDEDARROW
// Take N as input. For a value of N=7, we wish to draw the following pattern :

//                             1 
//                         2 1   1 2 
//                     3 2 1       1 2 3 
//                 4 3 2 1           1 2 3 4 
//                     3 2 1       1 2 3 
//                         2 1   1 2 
//                             1 
// Input Format:
// Take N as input.

// Constraints:
// N is odd number.

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i <= (N/2 + 1); i++)
    {
        for (int j = -1; j <= N-1-(i*2); j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        for (int l = 1; l < i; l++)
        {
            cout << " ";
        }
        for (int m = 2; m < i; m++)
        {
            cout << " ";
        }
        if(i > 1)
        {
            for (int p = 1; p <= i; p++)
            {
                cout << p;
            }
        }
        cout << endl;
    }

    
    for (int i = 0; i < (N/2); i++)
    {
        for (int j = -1; j < (N/3)-1+(i*2); j++)
        {
            cout << " ";
        }
        for (int k = (N/2)-i; k >= 1; k--)
        {
            cout << k;
        }
        for (int l = 1; l < (N/2)-i; l++)
        {
            cout << " ";
        }
        for (int m = 2; m < (N/2)-i; m++)
        {
            cout << " ";
        }
        if(i < (N/2)-1)
        {
            for (int p = 1; p <= (N/2)-i; p++)
            {
                cout << p;
            }
        }
        cout << endl;
    }
    return 0;
}
