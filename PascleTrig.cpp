#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, sp, a;
    int nm;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    sp = n;
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < sp; j++)
        {
            cout<<"\t";
        }
        
        nm = pow(11, i);
        while (nm>0)
        {
            a = nm % 10;
            cout << a <<"\t\t";
            nm = nm / 10;
        }
        cout<<"\n";
        sp--;
    }
}
