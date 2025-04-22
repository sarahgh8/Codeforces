#include <iostream>
using namespace std;
 
int main()
{
    short year;
    cin >> year;
 
    year++;
    int temp = year;
    int arr[4];
    int flag = 0;
    while(1)
    {
        flag = 0;
        for(int i = 0; i<4; i++)
        {
            arr[i] = temp % 10;
            temp = temp /10;
        }
        for(int i = 0; i<4; i++)
        {
            int num = arr[i];
            for(int j = i+1; j<4; j++)
            {
                if(arr[i] == arr[j])
                {
                    year++;
                    temp = year;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
            break;
    }
    cout << year << endl;
    return 0;
}