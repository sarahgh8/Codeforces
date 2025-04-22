#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    
    int g = 1;
    int mag[n];
    for(int i = 0; i<n; i++)
            cin >> mag[i];
    
    int start = mag[0];
    for(int i = 0; i<n; i++)
    {
        if(mag[i] != start)
        {
            g++;
            start = mag[i];
        }
 
    }
    cout << g << endl;
}