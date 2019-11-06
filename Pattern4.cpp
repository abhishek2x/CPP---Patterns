// Right angle triangle - reversed
#include <iostream>
using namespace std;

int main()
{
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "\t";
        }
        for (int k = 5; k >= i; k--)
        {
            cout << "$\t";
        }
        cout <<"\n";
    }
    return 0;
}
