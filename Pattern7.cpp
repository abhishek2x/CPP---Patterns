#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int c = 1;
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << "\t";
            a = b;
            b = c;
            c = a + b;
        }
        cout << endl;
    }
    return 0;   
}
