#include <iostream>
using namespace std;
 
int main()
{
    int n, e_index, o_index, e_counter = 0, o_counter = 0;
    cin >> n;
    int number[n];
    for(int i = 0; i < n; i++)
        cin >> number[i];
    
    for(int i = 0; i < n; i++)
    {
        if(number[i] % 2 == 0)
        {
            e_index = i;
            e_counter++;
        }
        else
        {
            o_index = i;
            o_counter++;
        }
    }
    if(e_counter == 1)
        cout << e_index + 1 << endl;
    else
        cout << o_index + 1 << endl;
    return 0;
}