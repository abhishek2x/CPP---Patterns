// Isosceles Triangle 
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout << "\t";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "$\t";
        }
        for (int l = 1; l <= i; l++)
        {
           cout << "$\t";
        }
        cout << endl;
    }
    return 0;
}
