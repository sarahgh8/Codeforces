#include <iostream>
using namespace std;
 
int main(){
    int t,a,sum=0;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a;
        sum+=a;
    }
    if(sum>=1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
 
    return 0;
}