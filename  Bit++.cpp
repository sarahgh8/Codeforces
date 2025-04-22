#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int X=0;
    int times;
    string input;
    cin>>times;
    for(int i=1;i<=times;i++){
        cin>>input;
        if(input=="X++")
            X++;
        else if(input=="++X")
            ++X;
        else if(input=="X--")
            X--;
        else if(input=="--X")
            --X;
    }
    cout<<X<<endl;
    return 0;
}