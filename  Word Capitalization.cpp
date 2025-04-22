#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string word;
    cin>>word;
    if(97<=int (word[0])&&int (word[0])<=122){
        word[0]-=32;
 
    }
    
    cout<<word;
       
 
    return 0;
}