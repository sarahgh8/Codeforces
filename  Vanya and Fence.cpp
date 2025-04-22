#include <iostream>
using namespace std;
 
int main ()
{
    short n, h, a;
    cin >> n >> h;
    int width = 0;
    for (int i = 1;i <= n;i++)
    {
        cin >> a;
        if(a > h)
            width += 2;
        else
            width += 1;
    }
    cout << width;
}