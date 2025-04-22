#include <iostream>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int counter_o = 0;
    int counter_z = 0;
 
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            counter_z = 0;
            counter_o++;
            if(counter_o == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else if(s[i] == '0')
        {
            counter_o = 0;
            counter_z++;
            if(counter_z == 7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
 
    }
    cout << "NO" << endl;
    return 0;
}