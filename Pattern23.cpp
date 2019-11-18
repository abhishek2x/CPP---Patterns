// Inverted triangle 2
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n-i-1; k++)
        {
            cout << "\t";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "&\t";
        }
        cout << endl;
    }
    
}

