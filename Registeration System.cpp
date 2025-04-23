#include <iostream>
using namespace std;

struct person
{
    string name;
    int count;
};

int main()
{
    int n;
    int j;
    string pre;
    int c = 0;
    cin >> n;
    
    person database[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> pre;
        for(j = 0; j < c; j++)
        {
            if(pre == database[j].name)
                break;
        }
        if(j == c)
        {
            database[c].name = pre;
            database[c].count = 1;
            cout << "OK" << endl;
            c++;
        }
        else
        {
            cout << database[j].name << database[j].count << endl;
            database[j].count++;
        }
    }
    return 0;
}