#include <iostream>
using namespace std;
 
int main ()
{
    unsigned short n, p, q, av_rooms = 0;
    cin >> n;
 
    for (int i = 1; i <= n; i++)
    {
        cin >> p >> q;
        if(p + 2 <= q)
            av_rooms++;
    }
    cout << av_rooms << endl;
    return 0;
}