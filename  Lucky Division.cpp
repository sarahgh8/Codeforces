#include <iostream>
using namespace std;
 
int is_lucky(int num)
{
    while(num > 0)
    {
        if(num % 10 != 7 && num % 10 != 4)
            return 0;
        num /= 10;
    }
    return 1;
}
int main()
{
    int n;
    int i;
    cin >> n;
 
    i = 1;
    if(is_lucky(n))
    {
        cout << "YES" << endl;
        return 0;
    }
    while(i < n)
    {
        if(n % i == 0 && is_lucky(i))
        {
            cout << "YES" << endl;
            return 0;
        }
        i++;
    }
    cout << "NO" << endl;
    return 0;        
}