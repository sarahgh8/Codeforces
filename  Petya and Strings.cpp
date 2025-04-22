#include <iostream>
using namespace std;
 
string s_tolower(string str)
{
    int i;
 
    i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    return (str);
}
int main ()
{
    string s1, s2;
    int i;
 
    cin >> s1;
    cin >> s2;
 
    s1 = s_tolower(s1);
    s2 = s_tolower(s2);
    i = 0;
 
    while (s1[i]&& s2[i] && s1[i] == s2[i])
        i++;
    if(s1[i] < s2[i])
        cout << "-1";
    else if(s1[i] > s2[i])
        cout << "1";
    else
        cout << "0";
    return 0;
}