#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    short n, t;
    string s;
    
    cin >> n >> t;
    cin >> s;
 
    for(int i = 1; i <= t; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(s[j] == 'B' && s[j+1] == 'G')
            {
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                j++;
            }
        }
    }
    cout << s << endl;
    return 0;
}