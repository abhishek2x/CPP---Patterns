// PATTERN INVERTEDHOURGLASS
// Take N as input. For a value of N=5, we wish to draw the following pattern :

//              5                   5 
//              5 4               4 5 
//              5 4 3           3 4 5 
//              5 4 3 2       2 3 4 5 
//              5 4 3 2 1   1 2 3 4 5 
//              5 4 3 2 1 0 1 2 3 4 5 
//              5 4 3 2 1   1 2 3 4 5 
//              5 4 3 2       2 3 4 5 
//              5 4 3           3 4 5 
//              5 4               4 5 
//              5                   5 
// Input Format:
// Take N as input.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 5; j >= n-i; j--)
        {
            cout << j;
        }
        for (int k = 1; k < (n*2)-(i*2); k++)
        {
            cout << " ";
        }
        for (int l = n-i; l <= 5; l++)
        {            
            if(l == 0)
            continue;
            cout << l;
        }
        cout << endl;
    }
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << j;
        }
        for (int k = 0; k <= ((i-1)*2); k++)
        {
            cout << " ";
        }
        for (int l = i; l <= 5; l++)
        {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}
