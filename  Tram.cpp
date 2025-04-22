#include <iostream>
using namespace std;
 
int main()
{
    int n;
    int num_pass = 0;
    int max_cap = 0;
    cin >> n;
 
    int pass[n][2];
    for(int i = 0; i<n;i++)
        for(int j = 0; j<2; j++)
            cin >> pass[i][j];
    
    for(int i = 0; i<n;i++)
    {
        num_pass -= pass[i][0];
        num_pass += pass[i][1];
        if(num_pass > max_cap)
            max_cap = num_pass;
    }
    cout << max_cap << endl;
    return 0;
}