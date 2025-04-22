#include <iostream>
using namespace std;
 
int main()
{
    int sum = 0;
    int n;
    cin >> n;
    int forces[n][3];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 3; j++)
            cin >> forces[i][j];
    
    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < n; i++)
            sum += forces[i][j];
        if(sum != 0)
            break;
    }
    if(sum != 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}