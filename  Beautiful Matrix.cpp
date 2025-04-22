#include <iostream>
using namespace std;
 
int main()
{
    int one_i;
    int one_j;
    int cntr = 0;
    int matrix[5][5];
    for(int i = 0; i <= 4; i++)
        for(int j = 0; j <= 4; j++)
            cin >> matrix[i][j];
    
    for(int i = 0; i <= 4; i++)
        for(int j = 0; j <= 4; j++)
        {
            if(matrix[i][j] == 1)
            {
                one_i = i;
                one_j = j;
                break;
            }
        }
    while(one_i != 2 || one_j != 2)
    {
        if(one_i < 2)
        {
            one_i++;
            cntr++;
        }
        else if(one_i > 2)
        {
            one_i--;
            cntr++;
        }
        else if(one_j < 2)
        {
            one_j++;
            cntr++;
        }
        else if(one_j > 2)
        {
            one_j--;
            cntr++;
        }
    }
    cout << cntr << endl;
    
    return 0;
}