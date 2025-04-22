#include <iostream>
using namespace std;
 
int m_strchr(string s, char c, int n)
{
    for(int i = 0; i < n; i++)
        if(s[i] == c)
            return 1;
    return 0;
}
int main ()
{
    string input;
    cin >> input;
    int c;
    for(int i = 0; i < input.size(); i++)
    {
        if(!m_strchr(input, input[i], i))
            c++;
    }
 
    if(c % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}