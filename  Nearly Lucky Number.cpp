#include <iostream>
using namespace std;
 
int main()
{
    long long int n;
    cin >> n;
    int counter = 0;
    while(n > 0)
    {
        if(n % 10 == 4 || n % 10 == 7)
            counter++;
        n = n / 10;
    }
    if(counter == 4 || counter == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
    return 0;
}