#include <iostream>
using namespace std;
 
int main()
{
    string s;
    char *str = "hello";
    cin >> s;
 
    for(int i = 0; i < s.size(); i++)
        if(*str && *str == s[i])
            str++;
    if(!*str)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;        
}